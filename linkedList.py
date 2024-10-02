
from node import Node

class LinkedList:
    #inicia o objeto lista
    def __init__(self):
        self.head = None
        self.size = 0
        
    #insere no final da lista
    def append(self, data):
        if self.head != None:
            pointer = self.head
            while pointer.next != None:
                pointer = pointer.next
            pointer.next = Node(data)
        else:
            self.head = Node(data)
        self.size += 1
        
    #insere um elemento no inicio da lista
    def newhead(self, data):
        node = Node(data)
        node.next = self.head
        self.head = node
        
    
    #retorna os elementos da lista e tamanho da lista
    def lenght(self):
        pointer = self.head
        while pointer != None:
            print(pointer.data, end=", ")
            pointer = pointer.next
        return self.size
    
    #retornar o elemento de determinado indicie
    def get(self, index):
        pointer = self._getNode(index)
        if pointer != None:
            return pointer.data
        else:
            raise IndexError("List index out of range") 
    
    #coloca um valor na lista
    def set(self, index, data):
        pointer = self._getNode(index)
        if pointer != None:
            pointer.data = data
        else:
            raise IndexError("List index out of range")
        
    #remove um elemento da lista
    def remove(self, data):
        if self.head is None:
            raise ValueError(f"{data} is not in list")
    
        if self.head.data == data:
            self.head = self.head.next
            self.size -= 1
            return True
    
        ancestor = self.head
        pointer = self.head.next
    
        while pointer is not None:
            if pointer.data == data:
                ancestor.next = pointer.next
                self.size -= 1
                return True
            ancestor = pointer
            pointer = pointer.next
        raise ValueError(f"{data} is not in list")
    
    #retornar o indicie de determinado elemento
    def index(self, data):
        pointer = self.head
        i = 0
        while pointer != None:
            if pointer.data == data:
                return i
            else:
                pointer = pointer.next
                i += 1
        raise ValueError("{data} is not in list")
    
    #retorna o Nó
    def _getNode(self, index):
        pointer = self.head
        for i in range(index):
            if pointer != None:
                pointer = pointer.next
            else:
                raise IndexError("list index out of range")
        return pointer

if __name__ == '__main__':
    lista = LinkedList()
    lista.append(10)
    lista.append(20)
    lista.append(30)
    lista.append(40)
    lista.append(50)
