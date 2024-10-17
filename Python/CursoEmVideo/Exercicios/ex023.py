num = int(input('Digite um número: '))
x = str(num)
print('='*20)
print(f'Unidade: {x[3]}')
print(f'Dezena: {x[2]}')
print(f'Centena: {x[1]}')
print(f'Milhar: {x[0]}')
print('='*20)

#x = int(input('Digite um número: '))
#m = x//1000
#c = (x-m*1000)//100
#d = (x-m*1000-c*100)//10
#u = (x-m*1000-c*100-d*10)//1
#print('Unidade: ',u)
#print('Dezena: ',d)
#print('Centena: ',c)
#print('Milhar: ',m)
