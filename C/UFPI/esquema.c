#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
} tData;

typedef struct {
    char nome[80];
    char email[80];
    tData niver;
} tPessoa;

int cadastra(int quant, tPessoa vet[], char novoEmail[]) {
    // Verifica se o vetor está cheio
    if (quant >= 200) {
        return 0; // vetor cheio
    }

    // Verifica se já existe uma pessoa com o mesmo email
    for (int i = 0; i < quant; i++) {
        if (strcmp(vet[i].email, novoEmail) == 0) {
            return -1; // email já cadastrado
        }
    }

    // Se não encontrou email duplicado, cadastra a nova pessoa
    printf("Informe o nome da pessoa: ");
    scanf(" %[^\n]", vet[quant].nome); // %[^\n] para ler até a quebra de linha

    strcpy(vet[quant].email, novoEmail); // copia o email informado
    printf("Informe o dia e o mês de nascimento (no formato DD MM): ");
    scanf("%d %d", &vet[quant].niver.dia, &vet[quant].niver.mes);

    printf("Pessoa cadastrada com sucesso!\n");
    return 1; // sucesso no cadastro
}

int localiza(char email[], int quant, tPessoa vet[]) {
    for (int i = 0; i < quant; i++) {
        if (strcmp(vet[i].email, email) == 0) {
            return i; // encontrou, retorna o índice
        }
    }
    return -1; // não encontrou
}

int main() {
    tPessoa vet[200]; // vetor de pessoas
    int opcao, quant = 0; // quant indica quantas pessoas estão cadastradas

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastrar\n");
        printf("2 - Localizar\n");
        printf("3 - Aniversariantes do mês\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1: // Cadastrar
            if (quant < 200) {
                char novoEmail[80];
                printf("Informe o email da pessoa a ser cadastrada: ");
                scanf(" %[^\n]", novoEmail);

                int resultado = cadastra(quant, vet, novoEmail);
                if (resultado == 1) {
                    quant++; // incrementa a quantidade de pessoas cadastradas
                } else if (resultado == 0) {
                    printf("Erro: vetor de pessoas está cheio.\n");
                } else if (resultado == -1) {
                    printf("Erro: email já cadastrado para outra pessoa.\n");
                }
            } else {
                printf("Erro: vetor de pessoas está cheio.\n");
            }
            break;

        case 2: // Localizar
            if (quant > 0) {
                char buscaEmail[80];
                printf("Informe o email da pessoa a ser localizada: ");
                scanf(" %[^\n]", buscaEmail);

                int indice = localiza(buscaEmail, quant, vet);
                if (indice != -1) {
                    printf("Pessoa encontrada:\n");
                    printf("Nome: %s\n", vet[indice].nome);
                    printf("Email: %s\n", vet[indice].email);
                    printf("Data de nascimento: %d/%d\n", vet[indice].niver.dia, vet[indice].niver.mes);
                } else {
                    printf("Pessoa não encontrada.\n");
                }
            } else {
                printf("Nenhuma pessoa cadastrada ainda.\n");
            }
            break;

        case 3: // Aniversariantes do mês
            if (quant > 0) {
                int mesBusca;
                printf("Informe o mês para buscar aniversariantes: ");
                scanf("%d", &mesBusca);

                printf("Aniversariantes do mês %d:\n", mesBusca);
                for (int i = 0; i < quant; i++) {
                    if (vet[i].niver.mes == mesBusca) {
                        printf("Nome: %s\n", vet[i].nome);
                        printf("Email: %s\n", vet[i].email);
                        printf("Data de nascimento: %d/%d\n", vet[i].niver.dia, vet[i].niver.mes);
                        printf("\n");
                    }
                }
            } else {
                printf("Nenhuma pessoa cadastrada ainda.\n");
            }
            break;

        case 0: // Sair
            printf("Encerrando o programa...\n");
            break;

        default:
            printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}