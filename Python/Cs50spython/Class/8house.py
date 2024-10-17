name = str(input("What's your name? "))

match name:
    case "Harry" | "Hermione" | "Ron":
        print("Griffyindor")
    case "Draco":
        print("Slytherin")
    case _:
        print("Who?")