#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TURMAS 10
#define MAX_ALUNOS 400

// Tipo definido para turmas
typedef struct {
    int codigodisciplina;
    char nomedisciplina[100];
    char professor[100];
    int quantalunos;
    int hinicio;
    int hfim;
    int nmrdasala;
    int cargahoraria;
} tTurma;

// Tipo definido para alunos
typedef struct {
    char nomealuno[100];
    float notas[3];
    float media;
} tAluno;

// Função para definir uma turma
void definfturma(tTurma *x) {
    printf("Código da disciplina: ");
    scanf("%d", &x->codigodisciplina);
    getchar(); // getchar para evitar um possível erro ao ler string

    printf("Nome da disciplina: ");
    scanf("%99[^\n]", x->nomedisciplina);
    getchar();

    printf("Professor: ");
    scanf("%99[^\n]", x->professor);
    getchar();

    printf("Quantidade de alunos: ");
    scanf("%d", &x->quantalunos);
    getchar();

    printf("Horário de início (inteiro, ex: 830 para 8:30): ");
    scanf("%d", &x->hinicio);
    getchar();

    printf("Horário de fim (inteiro, ex: 1700 para 17:00): ");
    scanf("%d", &x->hfim);
    getchar();

    printf("Número da sala: ");
    scanf("%d", &x->nmrdasala);
    getchar();

    printf("Carga horária: ");
    scanf("%d", &x->cargahoraria);
    getchar();
}

// Função para inserir os alunos e suas notas
void insalunoenota(tAluno y[], int quantalunos) {
    for (int i = 0; i < quantalunos; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%99[^\n]", y[i].nomealuno);
        getchar();

        float somaNotas = 0.0;
        for (int j = 0; j < 3; j++) {
            // Verificar se a nota está entre 0.0 e 10.0
            do {
                printf("Nota %d do aluno %d (entre 0,0 e 10,0): ", j + 1, i + 1);
                scanf("%f", &y[i].notas[j]);
                getchar();
                if (y[i].notas[j] < 0.0 || y[i].notas[j] > 10.0) {
                    printf("Nota inválida. Insira uma nota entre 0,0 e 10,0.\n");
                }
            } while (y[i].notas[j] < 0.0 || y[i].notas[j] > 10.0);

            somaNotas += y[i].notas[j] * (j + 1); // Peso da nota
        }
        y[i].media = somaNotas / 6.0; // Calcula a média
    }
}

// Função para mostrar alunos e suas médias da disciplina desejada
void exibalunoemedia(tTurma turmas[], tAluno alunos[][MAX_ALUNOS], int numTurmas) {
    int codigodisciplina, i, j;
    int encontrou = 0;

    printf("Insira o código da disciplina: ");
    scanf("%d", &codigodisciplina);
    getchar();

    for (i = 0; i < numTurmas; i++) {
        if (turmas[i].codigodisciplina == codigodisciplina) {
            printf("Alunos e Médias da disciplina %s:\n", turmas[i].nomedisciplina);

            // Mostrar dados dos alunos
            for (j = 0; j < turmas[i].quantalunos; j++) {
                printf("Nome: %s, Média: %.2f\n", alunos[i][j].nomealuno, alunos[i][j].media);
            }
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Código da disciplina não encontrado.\n");
    }
}

// Função para exibir alunos aprovados da disciplina desejada
void exibalunoaprov(tTurma turmas[], tAluno alunos[][MAX_ALUNOS], int numTurmas) {
    int codigodisciplina, i, j;
    int encontrou = 0;

    printf("Insira o código da disciplina: ");
    scanf("%d", &codigodisciplina);
    getchar();

    for (i = 0; i < numTurmas; i++) {
        if (turmas[i].codigodisciplina == codigodisciplina) {
            printf("Alunos aprovados da disciplina %s:\n", turmas[i].nomedisciplina);

            for (j = 0; j < turmas[i].quantalunos; j++) {
                if (alunos[i][j].media >= 7.0) {
                    printf("Nome: %s\n", alunos[i][j].nomealuno);
                }
            }
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Código da disciplina não encontrado.\n");
    }
}

// Função para exibir alunos reprovados da disciplina desejada
void exibalunoreprov(tTurma turmas[], tAluno alunos[][MAX_ALUNOS], int numTurmas) {
    int codigodisciplina, i, j;
    int encontrou = 0;

    printf("Insira o código da disciplina: ");
    scanf("%d", &codigodisciplina);
    getchar();

    for (i = 0; i < numTurmas; i++) {
        if (turmas[i].codigodisciplina == codigodisciplina) {
            printf("Alunos reprovados da disciplina %s:\n", turmas[i].nomedisciplina);

            for (j = 0; j < turmas[i].quantalunos; j++) {
                if (alunos[i][j].media < 7.0) {
                    printf("Nome: %s\n", alunos[i][j].nomealuno);
                }
            }
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Código da disciplina não encontrado.\n");
    }
}

// Função para alterar a nota do aluno
void altnota(tTurma turmas[], tAluno alunos[][MAX_ALUNOS], int numTurmas) {
    int codigodisciplina, i, j, alunoEscolhido, notaEscolhida;
    int encontrou = 0;

    printf("Insira o código da disciplina: ");
    scanf("%d", &codigodisciplina);
    getchar();

    for (i = 0; i < numTurmas; i++) {
        if (turmas[i].codigodisciplina == codigodisciplina) {
            printf("Turma encontrada: %s\n", turmas[i].nomedisciplina);
            printf("Alunos na turma:\n");

            for (j = 0; j < turmas[i].quantalunos; j++) {
                printf("%d - %s\n", j + 1, alunos[i][j].nomealuno);
            }

            printf("Escolha o número do aluno para alterar a nota: ");
            scanf("%d", &alunoEscolhido);
            getchar();

            if (alunoEscolhido < 1 || alunoEscolhido > turmas[i].quantalunos) {
                printf("Número de aluno inválido.\n");
                return;
            }

            alunoEscolhido--;
            printf("Aluno escolhido: %s\n", alunos[i][alunoEscolhido].nomealuno);

            printf("Escolha qual nota alterar (1, 2 ou 3): ");
            scanf("%d", &notaEscolhida);
            getchar();

            if (notaEscolhida < 1 || notaEscolhida > 3) {
                printf("Escolha de nota inválida.\n");
                return;
            }

            // Verificar se a nota está entre 0.0 e 10.0
            do {
                printf("Digite a nova nota (entre 0,0 e 10,0): ");
                scanf("%f", &alunos[i][alunoEscolhido].notas[notaEscolhida - 1]);
                getchar();
                if (alunos[i][alunoEscolhido].notas[notaEscolhida - 1] < 0.0 || alunos[i][alunoEscolhido].notas[notaEscolhida - 1] > 10.0) {
                    printf("Nota inválida. Insira uma nota entre 0,0 e 10,0.\n");
                }
            } while (alunos[i][alunoEscolhido].notas[notaEscolhida - 1] < 0.0 || alunos[i][alunoEscolhido].notas[notaEscolhida - 1] > 10.0);

            // Recalcular a média após alteração
            float somaNotas = 0.0;
            for (int k = 0; k < 3; k++) {
                somaNotas += alunos[i][alunoEscolhido].notas[k] * (k + 1); // Peso da nota
            }
            alunos[i][alunoEscolhido].media = somaNotas / 6.0; // Calcula a média

            printf("Nota alterada com sucesso. Nova média: %.2f\n", alunos[i][alunoEscolhido].media);
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Código da disciplina não encontrado.\n");
    }
}

// Função para salvar os dados em um arquivo
void salvardados(tTurma turmas[], tAluno alunos[][MAX_ALUNOS], int numTurmas) {
    FILE *arquivo;
    char nomeArquivo[100];

    printf("Digite o nome do arquivo: ");
    scanf("%99[^\n]", nomeArquivo);
    getchar();

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Salvando dados de cada turma
    fprintf(arquivo, "Número de turmas: %d\n", numTurmas);
    for (int i = 0; i < numTurmas; i++) {
        fprintf(arquivo, "\nTurma %d:\n", i + 1);
        fprintf(arquivo, "Código da disciplina: %d\n", turmas[i].codigodisciplina);
        fprintf(arquivo, "Nome da disciplina: %s\n", turmas[i].nomedisciplina);
        fprintf(arquivo, "Professor(a): %s\n", turmas[i].professor);
        fprintf(arquivo, "Quantidade de alunos: %d\n", turmas[i].quantalunos);
        fprintf(arquivo, "Horário de início: %02d:%02d\n", turmas[i].hinicio / 100, turmas[i].hinicio % 100);
        fprintf(arquivo, "Horário de fim: %02d:%02d\n", turmas[i].hfim / 100, turmas[i].hfim % 100);
        fprintf(arquivo, "Número da sala: %d\n", turmas[i].nmrdasala);
        fprintf(arquivo, "Carga horária: %d\n", turmas[i].cargahoraria);

        // Salvando dados de cada aluno
        for (int j = 0; j < turmas[i].quantalunos; j++) {
            fprintf(arquivo, "Aluno %d:\n", j + 1);
            fprintf(arquivo, "Nome: %s\n", alunos[i][j].nomealuno);
            fprintf(arquivo, "Notas: %.2f %.2f %.2f\n", alunos[i][j].notas[0], alunos[i][j].notas[1], alunos[i][j].notas[2]);
            fprintf(arquivo, "Média: %.2f\n", alunos[i][j].media);
        }
    }
    // Fechando o arquivo
    fclose(arquivo);
    printf("Dados salvos com sucesso no arquivo %s.\n", nomeArquivo);
}

// Função principal com o menu
int main() {
    tTurma turmas[MAX_TURMAS];
    tAluno alunos[MAX_TURMAS][MAX_ALUNOS];
    int numTurmas = 0;
    int escolha;

    do {
        printf("\nMenu:\n");
        printf("1. Definir Turma\n");
        printf("2. Inserir Alunos e Notas\n");
        printf("3. Exibir Alunos e Médias\n");
        printf("4. Exibir Alunos Aprovados\n");
        printf("5. Exibir Alunos Reprovados\n");
        printf("6. Alterar Nota\n");
        printf("7. Salvar Dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        getchar();

        switch (escolha) {
            case 1:
                if (numTurmas < MAX_TURMAS) {
                    definfturma(&turmas[numTurmas]);
                    numTurmas++;
                } else {
                    printf("Número máximo de turmas atingido.\n");
                }
                break;
            case 2:
                for (int i = 0; i < numTurmas; i++) {
                    insalunoenota(alunos[i], turmas[i].quantalunos);
                }
                break;
            case 3:
                exibalunoemedia(turmas, alunos, numTurmas);
                break;
            case 4:
                exibalunoaprov(turmas, alunos, numTurmas);
                break;
            case 5:
                exibalunoreprov(turmas, alunos, numTurmas);
                break;
            case 6:
                altnota(turmas, alunos, numTurmas);
                break;
            case 7:
                salvardados(turmas, alunos, numTurmas);
                break;
            case 0:
                printf("Finalizado\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}