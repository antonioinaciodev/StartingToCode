rota = []
while True:
    print("\n")
    print("Digitar '1' para adicionar um novo ponto GPS à rota.")
    print("Digitar '2' para remover um ponto GPS da rota.")
    print("Digitar '3' para exibir a rota atual.")
    print("Digitar '4' para sair do programa.")
    aux = int(input("Escolha uma opção: "))

    match aux:
        case 1:
            x = int(input("Insira o ponto x da rota: "))
            y = int(input("Insira o ponto y da rota: "))
            ponto = (x, y)
            rota.append(ponto)
            print("Ponto adicionado")
            print(rota)
        case 2:
            x = int(input("Insira o ponto x a ser removido: "))
            y = int(input("Insira o ponto y a ser removido: "))
            ponto = (x, y)
            if ponto in rota:
                rota.remove(ponto)
                print("Ponto removido")
                print(rota)
            else:
                print("Ponto não encontrado na rota.")
                print(rota)
        case 3:
            print(rota)
        case 4:
            print("Encerrado!")
            break
        case _:
            print("Não existe essa alternativa!")
