factor = 5

def multiplicacion(a: int = 0,b:int = 0) -> int:
    """Multiplica dos numeros

    Args:
        a (int, optional): Numero a. Defaults to 0.
        b (int, optional): Numero b. Defaults to 0.

    Returns:
        int: La multiplicacion de A * B
    """
    global factor
    factor = 6
    return factor * a * b

def multiple_mul(*numeros) -> int:
    """Multiplica muchos numeros

    Returns:
        int: La multiplicacion
    """
    mul = 1
    for i in numeros:
        mul = mul * i
    return mul

mul_lambda = lambda a, b: a * b

#print(multiplicacion(5,6))
#print(factor)