/**
 * @file binarios1.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2023-11-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *archivo = fopen("bin.bin", "wb");
    char dato = '@', dator;

    fwrite(&dato, sizeof(dato), 1, archivo);

    fclose(archivo);

    archivo = fopen("bin.bin", "rb");
    fread(&dator, sizeof(dator), 1, archivo);

    printf("%c\n", dator);

    return 0;
}
