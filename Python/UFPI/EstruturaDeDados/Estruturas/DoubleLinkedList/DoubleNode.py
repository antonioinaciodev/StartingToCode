class DoubleNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

    def getValor(self):
        return self.data
    
    def setValor(self, data):
        self.data = data