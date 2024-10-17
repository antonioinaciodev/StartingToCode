alunos = str(input('Digite o nome dos alunos separados por virgula: ')).split(', ')
'''
al1 = str(input('Digite o nome do 1° aluno: '))
al2 = str(input('Digite o nome do 2° aluno: '))
al3 = str(input('Digite o nome do 3° aluno: '))
al4 = str(input('Digite o nome do 4° aluno: '))
alunos = (al1, al2, al3, al4)
'''
from random import shuffle
shuffle(alunos)
print(f'A ordem de apresentação será {alunos}')
