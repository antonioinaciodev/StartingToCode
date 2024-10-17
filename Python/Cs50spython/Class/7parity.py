def main():
    x = int(input("What's x? "))
    if isEven(x):
        print("Even")
    else:
        print("Odd")
        
def isEven(self):
    return (self % 2 == 0)

main()