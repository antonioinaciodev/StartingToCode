class ArreyQueue:
    def __init__(self, limit):
        self.limit = limit  # Limite máximo da fila
        self.queue = []  # Usando uma lista para simular a fila
        self.common = 0
        self.priority = 0
        self.atendc = 0
        self.atendp = 0
    
    def isempty(self):
        return len(self.queue) == 0
    
    def enqueue(self, data, idade):
        if len(self.queue) >= self.limit:
            print("Fila cheia. Não é possível adicionar mais elementos.")
            return
        if idade >= 60:
            self.priority += 1
        else:
            self.common += 1
        self.queue.append((data, idade))  # Armazena uma tupla (data, idade)
    
    def dequeue(self):
        if self.isempty():
            raise IndexError("Fila está vazia")
        
        # Tenta atender um prioritário primeiro
        for i in range(len(self.queue)):
            if self.queue[i][1] >= 60:
                return self._remove_at(i)  # Remove e retorna o elemento prioritário
        
        # Se não houver prioritário, atende o primeiro comum
        return self._remove_at(0)  # Remove e retorna o primeiro comum
    
    def _remove_at(self, index):
        data = self.queue[index]
        del self.queue[index]  # Remove o elemento na posição index
        if data[1] >= 60:  # Atualiza contadores de atendidos
            self.priority -= 1
            self.atendp += 1
        else:
            self.common -= 1
            self.atendc += 1
        return data[0]  # Retorna o nome do atendido
    
    def peek(self):
        if self.isempty():
            raise IndexError("Fila está vazia")
        else:
            return self.queue[0][0]  # Retorna o primeiro elemento
    
    def atendidos(self):
        return self.atendc + self.atendp
    
    def listar(self):
        if self.isempty():
            print("Fila vazia")
            return
        for item in self.queue:
            print(f"{item[0]} (idade: {item[1]})")
    
    def info(self):
        print(f"Fila comum atual: {self.common}\nFila comum atendidos: {self.atendc}\nFila prioritária: {self.priority}\nFila prioritária atendidos: {self.atendp}")
    
    def __len__(self):
        return len(self.queue)
    
    def __str__(self):
        if self.isempty():
            raise IndexError("Fila está vazia")
        return ' '.join([item[0] for item in self.queue])

# Código principal
if __name__ == '__main__':
    limite = int(input("Defina o limite da fila: "))
    fila = ArreyQueue(limite)
    
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
                    atendido = fila.dequeue()
                    print(f"{atendido} foi atendido.")
                except IndexError:
                    print("Fila vazia")
            elif aux == 3:
                fila.listar()
            elif aux == 4:
                fila.info()
            elif aux == 5:
                if fila.isempty():
                    atendimentototal = fila.atendidos()
                    if atendimentototal > 0:
                        porcentc = (fila.atendc / atendimentototal) * 100
                        porcentp = (fila.atendp / atendimentototal) * 100
                        print(f"Total atendidos: {atendimentototal}")
                        print(f"Atendimentos comuns: {porcentc:.2f}%")
                        print(f"Atendimentos prioritários: {porcentp:.2f}%")
                    break
                else:
                    print("A fila não está vazia")
        except ValueError:
            print("Valor Inválido")
