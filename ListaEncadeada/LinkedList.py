from Node import *

class LinkedList:
    def __init__(self):
        self.head = None
        self._size = 0
        
    def isempty(self):
        return self.head is None

    def add(self, data):
        node = Node(data)
        node.prox = self.head
        self.head = node
        self._size += 1
        
    def size(self):
        return self._size
    
    def search(self, data):
        pointer = self.head
        i = 0
        while pointer is not None:
            if pointer.data == data:
                return i
            else:
                pointer = pointer.next
                i += 1
        raise IndexError(f"{data} is not in list")
    """
    if isempty(self):
        self.head = data
    else:
        pointer = self.head
        while pointer.next is not None:
            pointer = pointer.next
        pointer.next = data
    """
if __name__ == '__main__':
    list = LinkedList()
    list.add(10)
    list.add(20)
    list.add(30)