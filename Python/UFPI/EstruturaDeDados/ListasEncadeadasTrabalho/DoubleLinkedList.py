from DoubleNode import *

class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def insert_sorted(self, data):
        new_node = DoubleNode(data)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
        else:
            if data < self.head.data:
                new_node.next = self.head
                self.head.prev = new_node
                self.head = new_node
            else:
                pointer = self.head
                while pointer.next is not None and pointer.next.data < data:
                    pointer = pointer.next
                new_node.next = pointer.next
                new_node.prev = pointer
                if pointer.next is not None:
                    pointer.next.prev = new_node
                else:
                    self.tail = new_node
                pointer.next = new_node
        self.size += 1

    def contains(self, data):
        pointer = self.head
        while pointer is not None:
            if pointer.data == data:
                return True
            pointer = pointer.next
        return False

    def remove(self, data):
        if self.head is None:
            print("Lista vazia.")
            return
        pointer = self.head
        if pointer.data == data:
            self.head = pointer.next
            if self.head is not None:
                self.head.prev = None
            else:
                self.tail = None 
            self.size -= 1
            return
        while pointer is not None:
            if pointer.data == data:
                if pointer.next is not None:
                    pointer.next.prev = pointer.prev
                else:
                    self.tail = pointer.prev
                if pointer.prev is not None:
                    pointer.prev.next = pointer.next
                self.size -= 1
                return
            pointer = pointer.next
        print(f"{data} não encontrado na lista.")

    def show_elements(self):
        elements = []
        pointer = self.head
        while pointer is not None:
            elements.append(pointer.data)
            pointer = pointer.next
        print("Elementos na lista:", elements)
        print("Quantidade de elementos:", self.size)


if __name__ == '__main__':
    lista = DoubleLinkedList()
    lista.insert_sorted(5)
    lista.insert_sorted(3)
    lista.insert_sorted(8)
    lista.insert_sorted(1)
    lista.insert_sorted(4)
    lista.show_elements()
    print(lista.contains(3))
    print(lista.contains(7))
    lista.remove(3)
    lista.show_elements()
    lista.remove(10)