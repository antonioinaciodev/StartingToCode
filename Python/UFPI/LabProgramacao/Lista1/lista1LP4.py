def main():
    name = getName()
    printName(name)
    
def getName():
    name = str(input("Qual seu nome? "))
    return name

def printName(nome):
    print(f"Bem vindo {nome}!")
    new_name = len(nome.replace(" ",""))
    print(f"Seu nome tem {new_name} letras.")

main()