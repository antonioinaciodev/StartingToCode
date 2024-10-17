class Fraction:
    def __init__(self, w_num, w_den):
        self.num = w_num
        self.den = w_den

    def __str__(self) -> str:
        return "Fracao: "+str(self.num)+"/"+str(self.den)
    
    def show(self):
        print(self.num,'/',self.den)

    def getNum(self):
        return self.num

    def getDen(self):
        return self.den
    
    def __add__(self, other):
        soma_num = self.num * other.den + other.num * self.den
        soma_den = self.den * other.den
        return(Fraction(soma_num, soma_den))

    def __sub__(self, other):
        sub_num = self.num * other.den - other.num * self.den
        sub_den = self.den * other.den
        return(Fraction(sub_num, sub_den))

    def __mul__(self, other):
        mul_num = self.num * other.num
        mul_den = self.den * other.den
        return(Fraction(mul_num, mul_den))

    def __truediv__(self,other):
        div_num = self.num * other.den
        div_den = self.den * other.num
        return(Fraction(div_num, div_den))
    
    def __gt__(self, other):
        return (self.num * other.den) > (other.num * self.den)
    
    def __ge__(self, other):
        return (self.num * other.den) >= (other.num * self.den)
    
    def __lt__(self, other):
        return (self.num * other.den) < (other.num * self.den)
    
    def __le__(self, other):
        return (self.num * other.den) <= (other.num * self.den)
    
    def __eq__(self,other):
        return (self.num * other.den) == (other.num * self.den)
    
    def __ne__(self, other):
        return (self.num * other.den) != (other.num * self.den)

if __name__ == '__main__':
    '''
    f1 = Fraction(7,3)
    f2 = Fraction(2,5)
    print(f1)
    print(f2)

    #testando os métodos de pegar os valores
    print(f1.getNum())
    print(f1.getDen())
    print(f2.getNum())
    print(f2.getDen())
    
    #testanto os métodos de operações matemáticas
    print(f1 + f2)
    print(f1 - f2)
    print(f1 * f2)
    print(f1 / f2)

    #testando os métodos de operações relacionais
    print(f1 > f2)
    print(f1 >= f2)
    print(f1 < f2)
    print(f1 <= f2)
    print(f1 == f2)
    print(f1 != f2)
    '''