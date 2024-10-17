from math import sin, cos, tan, radians
ang = float(input('Digite o valor do ângulo: '))
seno = sin(radians(ang))
coss = cos(radians(ang))
tang = tan(radians(ang))
print(f'O ângulo {ang} tem\nseno: {seno:.2f}\ncosseno: {coss:.2f}\ntangente: {tang:.2f}')
