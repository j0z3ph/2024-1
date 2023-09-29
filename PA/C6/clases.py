from abc import ABCMeta, abstractmethod

class Figura(metaclass=ABCMeta):
    @property
    @abstractmethod
    def base(self):
        pass
    
    @base.setter
    @abstractmethod
    def base(self, base: int):
        pass
    
    @abstractmethod
    def area(self):
        pass

class Rectangulo(Figura):
    def __init__(self, base:int, altura: int) -> None:
        super().__init__()
        self.__base = base
        self.__altura = altura
        
    @property
    def base(self):
        return self.__base
    
    @base.setter
    def base(self, base: int):
        self.__base = base
    
    def area(self):
        return self.__base * self.__altura


if __name__ == "__main__":
    rect = Rectangulo(5,6)
    print(rect.area())
    print('Esto viene de el archivo clases')
    print(__name__)
