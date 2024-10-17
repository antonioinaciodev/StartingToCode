def main():
    n = getNum()
    printSomaImpares(n)
    
def getNum():
    num = int(input("Digite um valor inteiro: "))
    return num

def printSomaImpares(n):
    somai = 0
    for i in range(n+1):
        if i % 2 != 0:
            somai += i
    print(f"Soma dos impares até {n}: {somai}")
          
main()