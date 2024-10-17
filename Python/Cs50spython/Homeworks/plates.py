def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    return (
        verifica_tamanho(s) and
        verifica_inicio_letras(s) and
        verifica_numero_no_final(s) and
        verifica_primeiro_numero(s) and
        verifica_sem_pontuacao(s)
    )


def verifica_tamanho(s):
    return 2 <= len(s) <= 6


def verifica_inicio_letras(s):
    return s[:2].isalpha()


def verifica_numero_no_final(s):
    i = 0
    while i < len(s) and s[i].isalpha():
        i += 1
    return s[i:].isdigit() if i < len(s) else True


def verifica_primeiro_numero(s):
    for char in s:
        if char.isdigit():
            return char != '0'
    return True


def verifica_sem_pontuacao(s):
    return s.isalnum()


main()
