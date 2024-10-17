from Node import *

class Queue:
    def __init__(self):
        self.first = None
        self.last = None
        self.size = 0
        
    def push(self, data):
        node = Node(data)
        if self.last is None:
            self.last = node
        else:
            self.last.next = node
            self.last = node
        if self.first is None:
            self.first = node
        self.size += 1
    
    def pop(self):
        if self.first is None:
            raise IndexError("Queue is empty")
        else:
            data = self.first.data
            self.first = self.first.next
            self.size -= 1
            return data
    
    def peek(self):
        if self.first is None:
            raise IndexError("Queue is empty")
        else:
            data = self.first.data
            return data
    
    def __len__(self):
        return self.size
    
    def __str__(self):
        if self.last is None:
            raise IndexError("Queue is empty")
        else:
            r = ""
            pointer = self.first
            while pointer is not None:
                r = r + str(pointer.data) + " "
                pointer = pointer.next
            return r
        
if __name__ == '__main__':
    queue = Queue()