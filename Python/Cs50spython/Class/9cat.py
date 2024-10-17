'''
while True:
    n = int(input("What's n? "))
    if n > 0:
        break

for i in range(n):
    print("meow")
'''

def main():
    n = getNumber()
    meow(n)
    
def getNumber():
    while True:
        n = int(input("What's n? "))
        if n > 0:
            return n
    
def meow(self):
    for _ in range(self):
        print("meow")
    
main()