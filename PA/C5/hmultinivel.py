class A:
    def metodoA(self):
        print('Clase A')
        
class B(A):
    def metodoB(self):
        print('Clase B')

class C(B):
    def metodoC(self):
        print('Clase C')
        
a = A()
a.metodoA()

b = B()
b.metodoA()
b.metodoB()

c = C()
c.metodoC()