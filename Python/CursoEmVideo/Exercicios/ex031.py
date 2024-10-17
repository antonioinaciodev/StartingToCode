viagem = float(input(('Qual a distância da viagem em Km? ')))
valor1 = viagem*0.5
valor2 = viagem*0.45
if viagem <= 200:
    print(f'Sua passagem custa R${valor1:.2f}')
else:
    print(f'Sua passagem custa R${valor2:.2f}')
