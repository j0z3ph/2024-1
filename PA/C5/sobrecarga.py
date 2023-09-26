from multimethod import multimethod

class SobreCarga:
    def suma(self, *args):
        suma = 0
        for i in args:
            suma = suma + i
            
        return suma
    """ @multimethod
    def suma(self, valorA:int, valorB: int):
        return valorA + valorB
    @multimethod
    def suma(self, valorA:int, valorB: int, valorC:int):
        return valorA + valorB + valorC """
    
objeto = SobreCarga()
print(objeto.suma(5, 7,7,4,3,6))