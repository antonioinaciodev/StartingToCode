alunos = []

while True:
    print("\nDigitar '1' para inserir um novo aluno na lista.")
    print("Digitar '2' para buscar um aluno na lista.")
    print("Digitar '3' para exibir a lista de alunos em ordem alfabética.")
    print("Digitar '4' para remover um aluno da lista.")
    print("Digitar '5' para sair do programa.")
    aux = int(input("Escolha uma opção: "))

    match aux:
        case 1:
            nome = str(input("Nome do aluno inserido: ")).lower().title()
            alunos.append(nome)
            print("Alunos atuais:", alunos)
        case 2:
            nome = str(input("Nome do aluno buscado: ")).lower().title()
            if nome in alunos:
                print(f"Aluno encontrado na posição: {alunos.index(nome)}")
            else:
                print("Aluno não encontrado.")
        case 3:
            print("Lista de alunos em ordem alfabética:", sorted(alunos))
        case 4:
            nome = str(input("Nome do aluno removido: ")).lower().title()
            if nome in alunos:
                alunos.remove(nome)
                print("Alunos atuais:", alunos)
            else:
                print("Aluno não encontrado na lista.")
        case 5:
            print("Encerrado!")
            break
        case _:
            print("Não existe essa alternativa!")
