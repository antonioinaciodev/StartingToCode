def main():
    line = str(input("Input: "))
    nline = line
    for i in line:
        if i == "a" or i =="e" or i == "i" or i == "o" or i == "u" or i == "A" or i =="E" or i == "I" or i == "O" or i == "U":
            nline = nline.replace(f"{i}", "")
    print(f"Output: {nline}")

main()