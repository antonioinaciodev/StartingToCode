from Node import *

class Queue:
    def __init__(self):
        self.first = None
        self.last = None
        self.common = 0
        self.priority = 0
        self.atendc = 0
        self.atendp = 0
    
    def isempty(self):
        return self.first is None
    
    def enqueue(self, data, idade):
        node = Node(data, idade)
        if self.last is None:
            self.last = node
        else:
            self.last.next = node
            self.last = node
        if self.first is None:
            self.first = node
        if node.idade >= 60:
            self.priority += 1
        else:
            self.common += 1
    
    def dequeue(self):
        if self.isempty():
            raise IndexError("Fila está vazia")
        pointer = self.first
        previous = None
        while pointer is not None:
            if pointer.idade >= 60:
                if previous is None:
                    self.first = pointer.next
                else:
                    previous.next = pointer.next
                if pointer == self.last:
                    self.last = previous
                self.priority -= 1
                self.atendp += 1
                return pointer.data
            previous = pointer
            pointer = pointer.next
        data = self.first.data
        self.first = self.first.next
        self.atendc += 1
        self.common -= 1
        if self.first is None:
            self.last = None
        return data
    
    def peek(self):
        if self.first is None:
            raise IndexError("Fila está vazia")
        else:
            data = self.first.data
            return data
    def atendidos(self):
        atendidos = self.atendc + self.atendp
        return atendidos
    
    def listar(self):
        return print(f"{self}")
    
    def info(self):
        return print(f"Fila comum atual: {self.common}\nFila comum atendidos: {self.atendc}\nFila prioritária: {self.priority}\nFila prioritária atendidos: {self.atendp}")
    
    def __len__(self):
        size = self.common + self.priority
        return size
    
    def __str__(self):
        if self.last is None:
            raise IndexError("Fila está vazia")
        else:
            r = ""
            pointer = self.first
            while pointer is not None:
                r = r + str(pointer.data) + " "
                pointer = pointer.next
            return r
        
if __name__ == '__main__':
    fila = Queue()
    while True:
        try:
            aux = int(input("Menu:\n"
                "1 - Inserir na fila\n"
                "2 - Atender a fila\n"
                "3 - Listar fila\n"
                "4 - Informações de atendimentos\n"
                "5 - Sair do programa\n"
                ))
            if aux == 1:
                name = str(input("Nome: "))
                idade = int(input("Idade: "))
                fila.enqueue(name, idade)
            elif aux == 2:
                try:
                    fila.dequeue()
                except:
                    print("Fila vazia")
            elif aux == 3:
                try:
                    fila.listar()
                except:
                    print("Fila vazia")
            elif aux == 4:
                fila.info()
            elif aux == 5:
                if fila.isempty():
                    atendimentototal = fila.atendidos()
                    porcentc = (fila.atendc / atendimentototal) * 100
                    porcentp = (fila.atendp / atendimentototal) * 100
                    print(f"Total atendidos: {atendimentototal}")
                    print(f"Atendimentos comuns: {porcentc:.2f}" + "%")
                    print(f"Atendimentos prioritários: {porcentp:.2f}" + "%")
                    break
                else:
                    print("A fila não está vazia")
        except:
            print("Valor Inválido")