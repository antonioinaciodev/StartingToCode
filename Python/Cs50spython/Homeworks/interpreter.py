def interpreter(x, op, z):
    if op == "+":
        result = float(x) + float(z)
        return result
    if op == "-":
        result = float(x) - float(z)
        return result
    if op == "/":
        result = float(x) / float(z)
        return result
    if op == "*":
        result = float(x) * float(z)
        return result
    
def main():
    expression = str(input("Expression: "))
    x, y, z = expression.split(" ")
    print(interpreter(x, y, z), end="")
    
main()