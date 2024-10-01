
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
        
    #def insert(self, index, data):
        
    
    #retorna os elementos da lista e tamanho da lista
    def lenght(self):
        pointer = self.head
        while pointer != None:
            print(pointer.data, end=", ")
            pointer = pointer.next
        return self.size
    
    #retornar o elemento de determinado indicie
    def get(self, index):
        pointer = self.head
        for i in range(index):
            if pointer != None:
                pointer = pointer.next
            else:
                raise IndexError("list index out of range")
        if pointer != None:
            return pointer.data
        else:
            raise IndexError("List index out of range") 
    
    #coloca um valor na lista
    def set(self, index, data):
        pointer = self.head
        for i in range(index):
            if pointer != None:
                pointer = pointer.next
            else:
                raise IndexError("list index out of range")
        if pointer != None:
            pointer.data = data
        else:
            raise IndexError("List index out of range")
        
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
    
    