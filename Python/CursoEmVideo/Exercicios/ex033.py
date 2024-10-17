a = float(input('primeiro valor: '))
b = float(input('segundo valor: '))
c = float(input('terceiro valor: '))
if a<c and a<b:
    menor = a
if b<a and b<c:
    menor = b
if c<a and c<b:
    menor = c
if a>c and a>b:
    maior = a
if b>a and b>c:
    maior = b
if c>a and c>b:
    maior = c
print(f'O maior valor é {maior}')
print(f'O menor valor é {menor}')