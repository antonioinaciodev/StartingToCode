def inserir_pessoa():
    cpf = int(input("Digite o CPF da pessoa: "))
    if cpf in pessoas:
        print("CPF já registrado")
        return
    nome = input("Digite o nome da pessoa: ")
    endereco = input("Digite o endereço da pessoa: ")
    telefones = []
    
    while True:
        telefone = input("Digite um telefone (ou 0 para finalizar): ")
        if telefone == '0':
            break
        telefones.append(telefone)

    pessoas[cpf] = {'nome': nome, 'endereco': endereco, 'telefones': telefones}
    print("Pessoa inserida com sucesso!")
    
def listar_cadastrados():
    if  len(pessoas) == 0:
        print("Nenhuma pessoa cadastrada.")
        return

    print("\nLista de Pessoas Cadastradas:")
    for cpf, dados in pessoas.items():
        print(f"CPF: {cpf}")
        print(f"Nome: {dados['nome']}")
        print(f"Endereço: {dados['endereco']}")
        print(f"Telefones: {dados['telefones']}")
        
def buscar_cpf():
    cpf = int(input("Digite o CPF da pessoa procurada: "))
    if cpf in pessoas:
        print(f"Nome: {pessoas[cpf]['nome']}")
        print(f"Endereço: {pessoas[cpf]['endereco']}")
        print(f"Telefones: {pessoas[cpf]['telefones']}")

def buscar_telefone():
    telefone = input("Digite o telefone para busca: ")
    for cpf, dados in pessoas.items():
        telefones = dados.get('telefones')
        if telefones and telefone in telefones:
            print("\nPessoa encontrada:")
            print(f"CPF: {cpf}")
            print(f"Nome: {dados['nome']}")
            print(f"Endereço: {dados['endereco']}")
            print(f"Telefones: {dados['telefones']}")
            return
    print("Telefone não encontrado.")
    
def remover_cpf():
    cpf = int(input("Digite o CPF da pessoa procurada: "))
    if cpf in pessoas:
        del pessoas[cpf]
        print("Pessoa removida com sucesso.")
    else:
        print("CPF não encontrado.")

if __name__ == '__main__':
    pessoas = {}
    while True:
        op = int(input("\nMenu:\n"
              "1 - Inserir Pessoa\n"
              "2 - Listar Pessoas\n"
              "3 - Buscar pessoa por CPF\n"
              "4 - Buscar pessoa pro telefone\n"
              "5 - Remover pessoa por CPF\n"
              "6 - Encerrar programa\n"
              ))
        match op:
            case 1:
                inserir_pessoa()
            case 2:
                listar_cadastrados()
            case 3:
                buscar_cpf()
            case 4:
                buscar_telefone()
            case 5:
                remover_cpf()
            case 6:
                print("\nEncerrando...\n")
                break
            case _:
                print("Digite um valor válido\n")
                