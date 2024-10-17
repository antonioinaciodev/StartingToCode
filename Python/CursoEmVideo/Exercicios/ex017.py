ca = float(input('Comprimento do cateto adjacente: '))
co = float(input('Comprimento do cateto oposto: '))
from math import hypot
hip = hypot(ca, co)
print(f'A hipotenusa equivale a {hip:.2f}')
'''
poderia ser feito sem import:
hip = (ca**2 = co**2)**(1/2)
print(f'A hipotenusa equivale a {hip;.2f})
'''
