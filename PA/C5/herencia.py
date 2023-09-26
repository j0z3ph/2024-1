
class Persona:
    def __init__(self, nombre: str = None, edad: int = None) -> None:
        self.__nombre = nombre
        self.__edad = edad
        
    @property
    def nombre(self):
        return self.__nombre
    
    @property
    def edad(self):
        return self.__edad
        
    def habla(self, mensaje: str):
        print(mensaje, self.__nombre)

class Alumno(Persona):
    def __init__(self, nombre: str = None, edad: int = None, boleta: str = None) -> None:
        super().__init__(nombre, edad)
        self.__boleta = boleta
    def habla(self, mensaje: str):
        print(f'Hola, soy {self.nombre}\nMi boleta es: {self.__boleta}')
        
class Profesor(Persona):
    def __init__(self, nombre: str = None, edad: int = None) -> None:
        super().__init__(nombre, edad)
    
    
alumno = Alumno('Yaaz', 77, '87465')
profe = Profesor('Jose Luis')
#print(profe.nombre)
#print(alumno.nombre)
profe.habla('Hola ')
alumno.habla('Hola ')