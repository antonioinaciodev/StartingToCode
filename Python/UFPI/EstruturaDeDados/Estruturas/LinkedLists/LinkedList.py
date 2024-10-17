from Node import *

class LinkedList:
    def __init__(self):
        self.head = None
        self._size = 0
        
    def isempty(self):
        return self.head is None
    
    def _getnode(self, index):
        pointer = self.head
        for i in range(index):
            if pointer is not None:
                pointer = pointer.next
            else:
                raise IndexError("List index out of range")
        return pointer
        
    def index(self, elem):
        pointer = self.head
        i = 0
        while pointer is not None:
            if pointer.data == elem:
                return i
            else:
                pointer = pointer.next
                i += 1
        raise IndexError(f"{elem} is not in list")
        
    def append(self, data):
        if self.head:
            pointer = self.head
            while pointer.next is not None:
                pointer = pointer.next
            pointer.next = Node(data)
            self._size += 1
        else:
            self.head = Node(data)
      
    def remove(self, elem):
        if self.head is None:
            raise ValueError(f"{elem} is not in list")
        if self.head.data == elem:
            self.head = self.head.next
            self._size -= 1
            return True
        ancestor = self.head
        pointer = self.head.next
        while pointer is not None:
            if pointer.data == elem:
                ancestor.next = pointer.next
                self._size -= 1
                return True
            ancestor = pointer
            pointer = pointer.next
        raise ValueError(f"{elem} is not in list")

                
    def insert(self, index, elem):
        node = Node(elem)
        if index == 0:
            node.next = self.head
            self.head = node
        else:
            pointer = self._getnode(self, index-1)
            node.next = pointer.next
            pointer.next = node
        self._size += 1
        
    def __getitem__(self, index):
        pointer = self._getnode(self, index)
        if pointer is not None:
            return pointer.data
        else:
            raise IndexError("List index out of range")
        
    def __setitem__(self, index, elem):
        pointer = pointer = self._getnode(self, index)
        if pointer is not None:
            pointer.data = elem
        else:
            raise IndexError("List index out of range")
                
    def __len__(self):
        return self._size
    
    def __repr__(self):
        r = ""
        pointer = self.head
        while pointer is not None:
            r = r + str(pointer.data) + "->"
            pointer = pointer.next
        r = r + "None"
        return r
    
    def __str__(self):
        return self.__repr__()
    
if __name__ == '__main__':
    list = LinkedList()