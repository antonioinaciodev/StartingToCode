def main():
    name = str(input("camelCase: "))
    print(convert(name), end="")
    
def convert(name):
    nname = name
    for i in name:
        if i.isupper() == True:
            nname = nname.replace(f"{i}", f"_{i}")
    nname = nname.lower()
    return nname

if __name__ == "__main__":
    main()