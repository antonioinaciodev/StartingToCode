def main():
    n = getNum()
    printPares(n)
    
def getNum():
    num = int(input("Digite um valor inteiro: "))
    return num

def printPares(n):
    for i in range(n+1):
        if i % 2 == 0:
            print(i)

main()