velocidade = float(input('Qual era a velocidade em Km/h? '))
multa = (velocidade-80)*7
if velocidade > 80:
    print(f'Você foi multado em: R${multa:.2f}')
else:
    print('Você está dentro do limite da via.')
