nome = str(input('Qual seu nome? ')).strip()
print(f'Seu nome tem {(nome.lower()).count('a')} letras "a"')
print(f'A primeira letra "a" aparece na posição {(nome.capitalize()).find('A')+1}')
print(f'A ultima letra "a" aparece na posição {(nome.lower()).rfind('a')+1}')
