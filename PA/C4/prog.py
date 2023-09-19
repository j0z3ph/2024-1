class Alumno:
    boleta = ''
    nombre = ''

    def hablar(self):
        print(f'Hola, soy {self.nombre}.\nMi boleta es: {self.boleta}')

alumno2 = Alumno()
alumno1 = Alumno()
alumno1.nombre = 'Evan'
alumno1.boleta = '87654321'
alumno2.nombre = 'Adan'
alumno2.boleta = '12345678'

# print(f'Hola {alumno1.nombre}, con boleta {alumno1.boleta}')

alumno2.hablar()
alumno1.hablar()