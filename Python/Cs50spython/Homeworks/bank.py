def verify(greeting):
    newgreeting = greeting.lower().strip(" ")
    if newgreeting.startswith("hello"):
        return "$0"
    elif newgreeting.startswith("h"):
        return "$20"
    else:
        return "$100"

def main():
    greeting = str(input("Greeting: "))
    print(verify(greeting))
    
main()