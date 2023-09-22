class Alumno:
    var = "Hola a todos"
    
    @classmethod
    def di_hola(cls) -> str: # Metodo de clase
        return cls.nombre
    
    @staticmethod
    def di_hola_statico() -> str: # Metodo estatico
        return "Holi canoli"
    
    def __init__(self, nombre: str, cuenta: str) -> None:
        self.nombre = nombre # Variable de instancia
        self.cuenta = cuenta # Variable de instancia
        
    def habla(self) -> str: # Metodo de instancia
        return self.nombre
    
print(Alumno.di_hola())