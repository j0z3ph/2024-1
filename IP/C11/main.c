#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    char entrada[100];

    while (1)
    {
        printf("Menu\n");
        //scanf("%i", &i);
        fgets(entrada, 100, stdin);
        i = atoi(entrada);

        printf("Tecla...");
        getc(stdin);
    }
    return 0;
}
