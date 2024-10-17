salario = float(input('Qual o seu salário? R$'))
if salario > 1250:
    print(f'Seu salário agora é R${salario*1.10:.2f} com 10% de aumento.')
else:
    print(f'Seu salário agora é R${salario*1.15:.2f} com 15% de aumento.')
