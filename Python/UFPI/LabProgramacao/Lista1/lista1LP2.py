def main():
    n1 = int(input("Digite o primeiro valor: "))
    n2 = int(input("Digite o segundo valor: "))

    print(sumNums(n1, n2))
    print(subNums(n1, n2))
    print(mulNums(n1, n2))
    print(divNums(n1, n2))
    
def sumNums(n1, n2):
    return n1 + n2

def subNums(n1, n2):
    return n1 - n2

def mulNums(n1, n2):
    return n1 * n2

def divNums(n1, n2):
    return n1 / n2

main()