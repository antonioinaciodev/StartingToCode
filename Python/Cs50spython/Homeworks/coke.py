def main():
    coke = 50
    while coke > 0:
        print(f"Amount Due: {coke}")
        value = int(input("Insert Coin: "))
        if value == 25 or value == 10 or value == 5:
            coke -= value
    if coke < 0:
        coke = coke*-1
    print(f"Change Owed: {coke}")

if __name__ == "__main__":
    main()
