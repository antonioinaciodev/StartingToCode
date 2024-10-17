x1 = float(input('Insira o valor da primeira reta: '))
x2 = float(input('Insira o valor da segunda reta: '))
x3 = float(input('Insira o valor da terceira reta: '))
if x1 < x2 + x3 or x2 < x1 + x3 or x3 < x1 + x2:
    print('É possível formar um triângulo')
else:
    print('Não é possível formar triângulo')
