class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
          
    def get_data(self):
        return self.data
    
    def set_data(self, data):
        self.data = data