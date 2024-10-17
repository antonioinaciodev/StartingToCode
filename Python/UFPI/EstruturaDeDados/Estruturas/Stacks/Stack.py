from Node import *

class Stack:
    #método que inicia o objeto
    def __init__(self):
        self.top = None
        self.size = 0
    
    #método que insere no topo
    def push(self, data):
        node = Node(data)
        node.next = self.top
        self.top = node
        self.size += 1
        return True
    
    #método que retira do topo
    def pop(self):
        if self.size > 0:
            node = self.top
            self.top = self.top.next
            self.size -= 1
            return node.data
        raise IndexError("Stack is empty!")
    
    #método que retorna o topo
    def peek(self):
        if self.size > 0:
            node = self.top
            return node.data
        raise IndexError("Stack is empty!")
    
    #método que retorna o tamanho
    def __len__(self):
        return self.size
    
    #método que retorna o objeto em string
    def __str__(self):
        r = ""
        pointer = self.top
        while pointer is not None:
            r = r + str(pointer.data) + "\n"
            pointer = pointer.next
        return r
    
if __name__ == '__main__':
    stack = Stack()