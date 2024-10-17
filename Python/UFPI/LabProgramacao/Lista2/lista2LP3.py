conjunto1 = ['azul', 'verde', 'amarelo', 'vermelho']
conjunto2 = ['azul', 'preto', 'roxo', 'laranja']
conjunto3 = ['preto', 'cinza', 'amarelo', 'vermelho']

while True:
    print("\n")
    print("Digitar '1' para realizar a união entre dois conjuntos de cores.")
    print("Digitar '2' para realizar a interseção entre dois conjuntos de cores.")
    print("Digitar '3' para realizar a diferença entre dois conjuntos de cores.")
    print("Digitar '4' para sair do programa.")
    aux = int(input("Escolha uma opção: "))

    match aux:
        case 1:
            print("conjunto1:", conjunto1)
            print("conjunto2:", conjunto2)
            print("conjunto3:", conjunto3)
            x = int(input("Selecione o conjunto x: "))
            y = int(input("Selecione o conjunto y: "))
            conjunto_x = [conjunto1, conjunto2, conjunto3][x - 1]
            conjunto_y = [conjunto1, conjunto2, conjunto3][y - 1]
            uniao = list(set(conjunto_x) | set(conjunto_y))
            print("União:", uniao)

        case 2:
            print("conjunto1:", conjunto1)
            print("conjunto2:", conjunto2)
            print("conjunto3:", conjunto3)
            x = int(input("Selecione o conjunto x (1, 2, 3): "))
            y = int(input("Selecione o conjunto y (1, 2, 3): "))
            conjunto_x = [conjunto1, conjunto2, conjunto3][x - 1]
            conjunto_y = [conjunto1, conjunto2, conjunto3][y - 1]
            intersecao = list(set(conjunto_x) & set(conjunto_y))
            print("Interseção:", intersecao)

        case 3:
            print("conjunto1:", conjunto1)
            print("conjunto2:", conjunto2)
            print("conjunto3:", conjunto3)
            x = int(input("Selecione o conjunto x (1, 2, 3): "))
            y = int(input("Selecione o conjunto y (1, 2, 3): "))
            conjunto_x = [conjunto1, conjunto2, conjunto3][x - 1]
            conjunto_y = [conjunto1, conjunto2, conjunto3][y - 1]
            diferenca = list(set(conjunto_x) - set(conjunto_y))
            print("Diferença:", diferenca)
        case 4:
            print("Encerrando.")
            break
        case _:
            print("Não existe essa alternativa!")
