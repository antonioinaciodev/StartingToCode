class MySet:
    def __init__(self):
        self.elements = {}

    def add(self, elem):
        self.elements[elem] = True

    def remove(self, elem):
        if elem in self.elements:
            del self.elements[elem]
        else:
            raise KeyError(f"{elem} not found in set.")

    def contains(self, elem):
        return elem in self.elements

    def get_elements(self):
        return list(self.elements.keys())

if __name__ == '__main__':
    set = MySet()
    set.add("maçã")
    set.add("banana")
    print(set.get_elements())
    set.remove("banana")
    print(set.contains("banana"))
