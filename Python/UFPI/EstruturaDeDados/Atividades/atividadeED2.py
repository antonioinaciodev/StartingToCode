import random

class Carta:
    naipe = ['Copas', 'Ouros', 'Espadas', 'Paus']
    valor = {'Ás':1, '2':2, '3':3, '4':4, '5':5, '6':6, '7':7, '8':8, '9':9, '10':10, 'J':11, 'Q':12, 'K':13}

    def __init__(self, naipe, valor):
        self.naipe = naipe
        self.valor = valor

    def __str__(self):
        return f"{self.valor} de {self.naipe}"

class Baralho:
    def __init__(self):
        self.cartas = [Carta(n, m) for n in Carta.naipe for m in Carta.valor.values()]
        random.shuffle(self.cartas)
    
    def sortear(self):
        return self.cartas.pop() if self.cartas else None

def jogar():
    print("O objetivo é se aproximar de 21 o max possível!")
    baralho = Baralho()
    jogador1 = []
    jogador2 = []
    vitoria = 0

    while True:
        mao = baralho.sortear()
        if mao is None:
            break
        jogador1.append(mao)
        print(f"Jogador 1 recebeu: {mao}")
        print(f"Sua mão: {[str(carta) for carta in jogador1]}")
        if sum([carta.valor for carta in jogador1]) > 21:
            print("Você perdeu")
            vitoria = 2
            break
        resposta = input("Deseja mais uma carta? (s/n): ")
        if resposta.lower() == "n":
            break
    
    while vitoria != 2:
        mao = baralho.sortear()
        if mao is None:
            break
        jogador2.append(mao)
        print(f"Jogador 2 recebeu: {mao}")
        print(f"Sua mão: {[str(carta) for carta in jogador2]}")
        if sum([carta.valor for carta in jogador2]) >= 21:
            print("Você perdeu")
            vitoria = 1
            break
        resposta = input("Deseja mais uma carta? (s/n): ")
        if resposta.lower() == "n":
            break
    while vitoria == 0:
        if 21 - sum([carta.valor for carta in jogador1]) < 21 - sum([carta.valor for carta in jogador2]):
            vitoria = 1
        elif 21 - sum([carta.valor for carta in jogador1]) > 21 - sum([carta.valor for carta in jogador2]):
            vitoria = 2
    
    if vitoria == 1:
        print("jogador 1 venceu")
    elif vitoria == 2:
        print("jogador 2 venceu")
    elif vitoria == 0:
        print("Empate")

if __name__ == '__main__':
    jogar()