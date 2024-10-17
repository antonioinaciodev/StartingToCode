def main():
    #printColumn(3)
    #printRow(4)
    printSquare(3)

'''   
def printColumn(self):
    print("#\n") * self, end="")
'''

def printRow(self):
        print("# " * self)

def printSquare(self):
    for i in range(self):
        printRow(self)
    
main()