def convert(self):
    return self.replace(":)","🙂").replace(":(","🙁")

def main():
    line = str(input(""))
    if ":)" or ":(" in line:
        newline = convert(line)
    print(newline)

main()
