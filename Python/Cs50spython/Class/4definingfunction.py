def main():
    hello()
    name = str(input("What's your name? ")).title()
    hello(name)
    
def hello(self="no name"):
    print(f"Hello, {self}!")

main()