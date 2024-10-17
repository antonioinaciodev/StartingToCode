dias = int(input('Dias alugados: '))
km = float(input('kilômetros percorridos: '))
conta = (dias*60) + (km*0.15)
print(f'O total a pagar é: R${conta:.2f}')
