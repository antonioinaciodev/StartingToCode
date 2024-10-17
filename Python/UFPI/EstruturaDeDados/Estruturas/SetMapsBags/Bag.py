from collections import Counter

class MyBag:
    def __init__(self):
        self.elements = Counter()

    def add(self, elem):
        self.elements[elem] += 1

    def remove(self, elem):
        if self.elements[elem] > 1:
            self.elements[elem] -= 1
        elif self.elements[elem] == 1:
            del self.elements[elem]
        else:
            raise KeyError(f"{elem} not found in bag.")

    def count(self, elem):
        return self.elements[elem]

    def get_all_elements(self):
        return list(self.elements.elements())

if __name__ == '__main__':
    bag = MyBag()
    bag.add("maçã")
    bag.add("banana")
    bag.add("maçã")
    print(bag.count("maçã"))
    bag.remove("maçã")
    print(bag.count("maçã"))
    bag.add("banana")
    print(bag.get_all_elements())
