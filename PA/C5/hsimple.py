class A:
    def metodoA(self):
        print('Clase A')
        
class B(A):
    def metodoB(self):
        print('Clase B')
        
a = A()
a.metodoA()

b = B()
b.metodoA()
b.metodoB()