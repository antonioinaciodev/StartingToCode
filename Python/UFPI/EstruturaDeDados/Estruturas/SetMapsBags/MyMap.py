class MyMap:
    def __init__(self):
        self.elements = {}

    def put(self, key, value):
        self.elements[key] = value

    def remove(self, key):
        if key in self.elements:
            del self.elements[key]
        else:
            raise KeyError(f"{key} not found in map.")

    def get(self, key):
        return self.elements.get(key, None)

    def contains_key(self, key):
        return key in self.elements

    def get_all_keys(self):
        return list(self.elements.keys())

if __name__ == '__main__':
    map = MyMap()
    map.put("Alice", 25)
    map.put("Bob", 30)
    print(map.get("Alice"))
    map.remove("Bob")
    print(map.contains_key("Bob"))
