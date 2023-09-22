class Alumno:
    #boleta = ''
    #nombre = ''
    #edad = 18
    
    def __init__(self, nombre: str, boleta: str, edad:int = 0) -> None:
        self.nombre = nombre
        self.boleta = boleta
        self.edad = edad

    def __str__(self) -> str:
        return f'Hola, soy {self.nombre}.\nMi boleta es: {self.boleta}\nEdad: {self.edad}'
    
    def hablar(self):
        print(f'Hola, soy {self.nombre}.\nMi boleta es: {self.boleta}\nEdad: {self.edad}')


#print(Alumno.edad)

#alumno2 = Alumno(boleta='87654321', nombre='Eva')
alumno1 = Alumno('Adan', '12345678', '5000')
print(alumno1)
# alumno1.nombre = 'Eva'
# alumno1.boleta = '87654321'
# alumno2.nombre = 'Adan'
# alumno2.boleta = '12345678'

# print(f'Hola {alumno1.nombre}, con boleta {alumno1.boleta}')

# alumno2.hablar()
# alumno1.hablar()