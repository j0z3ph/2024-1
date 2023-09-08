""" 
ejemplo2.py
author: Jose Luis (jlcruz@ipn.mx)
Ejemplo de Ifs
date: 8 de septiemble de 2023
"""
edad = int(input('Dame tu edad o te pico: '))
if (edad < 18):
    print('Largo de aqui chamaco')
elif edad >= 18 and edad < 30:
    print('No te sabes la de chambear')
else:
    print('Gracias')
    
print("Adios")