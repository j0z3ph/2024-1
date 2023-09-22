class Alumno:
    
    def __init__(self, nombre: str, boleta: str) -> None:
        self.__nombre = nombre
        self.__boleta = boleta
        
    @property
    def nombre(self) -> str:
        return self.__nombre
    
    @nombre.setter
    def nombre(self, nombre: str) -> None:
        self.__nombre = nombre
        
    @property
    def boleta(self) -> str:
        return self.__boleta
    
    
    def __str__(self) -> str:
        return f'Nombre: {self.__nombre}\nCuenta: {self.__boleta}'
        
alumno1 = Alumno('','')
alumno1.nombre= 'Jose Luis'
alumno1.boleta = "1234"

print(alumno1.nombre)