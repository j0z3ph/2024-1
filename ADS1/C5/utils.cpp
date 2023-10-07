/**
 * @file utils.cpp
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer biblioteca de funciones.
 * @version 0.1
 * @date 2023-10-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>

// Definiciones

void limpia()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausar()
{
    std::cout << "Presione enter para continuar...";
    std::cin.ignore();
    std::cin.get();
}