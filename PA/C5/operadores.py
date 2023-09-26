class Punto:
    def __init__(self, x, y) -> None:
        self.__x = x
        self.__y = y
    @property
    def x(self):
        return self.__x
    
    @property
    def y(self):
        return self.__y
    
    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Punto(x,y)
    
    def __str__(self) -> str:
        return f'({self.x},{self.y})'

p1 = Punto(3,4)
p2 = Punto(5,6)

print(p1 + p2)
    
