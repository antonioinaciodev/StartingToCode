class Node:
    def __init__(self, data, idade):
        self.data = data
        self.next = None
        self.idade = idade
        
    def getValor(self):
        return self.data
    
    def setValor(self, data):
        self.data = data