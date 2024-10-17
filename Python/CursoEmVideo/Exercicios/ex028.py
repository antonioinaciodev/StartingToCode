from random import randint
from time import sleep
sorteio = randint(0,5)
tentativa = int(input('Chute um número de 0 a 5: '))
print('processando...')
sleep(3)
if tentativa == sorteio:
    print('Você acertou!')
else:
    print('Você errou, mais uma chance!')
    tentativa2 = int(input('Chute novamente: '))
    print('processando...')
    sleep(3)
    if tentativa2 == sorteio:
        print('Você acertou!')
    else:
        print(f'Você errou novamente!, o correto era {sorteio}')
