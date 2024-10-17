f = float(input('Digite um valor: '))
from math import trunc
print(f'A parte inteira do valor {f} é {trunc(f)}')
'''
poderia ser feito sem import:
print(f'A parte inteira do valor {f} é {int(f)}')
'''
