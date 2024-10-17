n1 = int(input('Digite um valor: '))
n2 = int(input('Digite novamente: '))
#print(f'A soma entre {n1} e {n2} equivale a {n1+n2}')
soma = n1 + n2
subtracao = n1 - n2
multiplicacao = n1 * n2
divisao = n1 / n2
potencia = n1 ** n2
divisaointeira = n1 // n2
print(f'Entre {n1} e {n2}, a soma é {soma},  a subtração é {subtracao}, a multiplicação é {multiplicacao}', end=' ')
print(f', a divisão é {divisao:.3f}, a potenciação é {potencia}, a divisão inteira é {divisaointeira}.')
