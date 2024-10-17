def verify(self):
    new_self = self.lower().replace(" ","").replace("-","")
    if new_self == "fortytwo" or new_self == "42":
        return "Yes"
    else:
        return "No"

def main():
    resp = str(input("Type: "))
    print(verify(resp))

main()
