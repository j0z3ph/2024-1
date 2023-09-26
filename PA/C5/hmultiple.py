class A:
    def metodo(self):
        print ('Metodo de A')
        
class B:
    def metodo(self):
        print ('Metodo de B')
        
class C:
    def metodo(self):
        print ('Metodo de C')
        
class D(C,B,A):
    pass

d = D()
d.metodo()