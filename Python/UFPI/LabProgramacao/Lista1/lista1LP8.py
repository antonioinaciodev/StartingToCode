def main():
    n = getNum()
    print(f"O fatorial de {n} é {Fatorial(n)}")
    
def getNum():
    num = int(input("Digite um valor inteiro: "))
    return num

def Fatorial(n):
    if n == 0:
        return 1
    else:
        return n * Fatorial(n-1)

main()