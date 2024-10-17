def main():
    frase = getString()
    printName(frase)
    
def getString():
    while True:
        frase = str(input("Digite uma frase de no max. 100 chars: "))
        if len(frase) <= 100:
            return frase

def printName(frase):
    print(frase[::-1])

main()