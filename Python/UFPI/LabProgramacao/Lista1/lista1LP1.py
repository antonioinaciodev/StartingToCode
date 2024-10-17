def main():
    n = getNum()
    printNum(n)
    
def getNum():
    num = int(input("Digite um valor inteiro: "))
    return num

def printNum(n):
    print(f"Valor Escolhido: {n}")
    print(f"Dobro do valor: {n*2}")
    print(f"Triplo do valor: {n*3}")
    
main()