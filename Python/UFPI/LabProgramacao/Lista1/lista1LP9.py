def main():
    n = getNum()
    print(f"O fibonacci de {n} é {Fibonacci(n)}")

def getNum():
    num = int(input("Digite um valor inteiro: "))
    return num

def Fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)

main()