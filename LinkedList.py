from Node import *

class LinkedList:
    # inicia o objeto lista
    def __init__(self):
        self.head = None
        self.size = 0
        
    # insere no final da lista
    def append(self, data):
        data = str(data).lower()
        if self.contains(data):
            print("Nome ja cadastrado")
            return
        if self.head is not None:
            pointer = self.head
            while pointer.next is not None:
                if pointer == pointer.next:
                    raise IndexError("List index out of range")
                pointer = pointer.next
            pointer.next = Node(data)
        else:
            self.head = Node(data)
        self.size += 1

    # insere um elemento no início da lista
    def newhead(self, data):
        data = str(data).lower()
        if self.contains(data):
            print("Nome ja cadastrado")
            return
        node = Node(data)
        node.next = self.head
        self.head = node
        self.size += 1
    
    # verifica se a lista contém um elemento
    def contains(self, data):
        data = str(data).lower()
        pointer = self.head
        while pointer is not None:
            if pointer.data == data:
                return True
            pointer = pointer.next
        return False
    
    # retorna os elementos da lista e tamanho da lista
    def length(self):
        return self.size
    
    # retornar o elemento de determinado índice
    def get(self, index):
        pointer = self._getNode(index)
        if pointer is not None:
            return pointer.data
        else:
            raise IndexError("List index out of range") 
    
    # coloca um valor na lista
    def set(self, index, data):
        pointer = self._getNode(index)
        if pointer is not None:
            pointer.data = data
        else:
            raise IndexError("List index out of range")
        
    # remove um elemento da lista
    def remove(self, data):
        data = str(data).lower()
        if self.head is None:
            raise ValueError(f"{data} is not in list")
        elif self.head.data == data:
            self.head = self.head.next
            self.size -= 1
            return True
        else:
            ancestor = self.head
            pointer = self.head.next
            while pointer is not None:
                if pointer.data == data:
                    ancestor.next = pointer.next
                    pointer.next = None
                    self.size -= 1
                    return True
                ancestor = pointer
                pointer = pointer.next
        raise ValueError(f"{data} is not in list")
        
    # retornar o índice de determinado elemento (case-insensitive)
    def index(self, data):
        data = str(data).lower()
        pointer = self.head
        i = 0
        while pointer is not None:
            if pointer.data == data:
                return i
            else:
                pointer = pointer.next
                i += 1
        raise ValueError(f"{data} is not in list")
    
    # retorna o Nó
    def _getNode(self, index):
        pointer = self.head
        for i in range(index):
            if pointer is not None:
                pointer = pointer.next
            else:
                raise IndexError("List index out of range")
        return pointer
    
    # retorna uma representação da lista em str
    def __str__(self):
        r = ""
        pointer = self.head
        while pointer is not None:
            r = r + str(pointer.data) + "->"
            pointer = pointer.next
        r = r + "None"
        return r
            
if __name__ == '__main__':
    lista = LinkedList()
    lista.append("Raimundo")
    lista.append("raimundo")
    lista.append("RAIMUNDO")
    lista.append("Maria")
    lista.append("maria")
    print(lista)
    
