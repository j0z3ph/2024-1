"""ejemplo4.py

"""
def tablas(n: int):
    """Genera la tabla hasta el diez de n

    Args:
        n (int): La tabla que se desea
    """
    for x in range(1,11):
        print(f'{n} x {x} = {n*x}')


numero = int(input('Numero de la tabla: '))
tablas(numero)
