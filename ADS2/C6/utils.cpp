#include<iostream>


// Definiciones de funciones

void clinex()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausa()
{
    std::cout << "Presione una tecla para continuar...";
    std::cin.ignore();
    std::cin.get();
}


