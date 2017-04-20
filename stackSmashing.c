#include <stdio.h>

void secretFunction()
{
    printf("Enhorabuena!\n");
    printf("Ha entrado en la función secreta!\n");
}

void echo()
{
    char buffer[20];

    printf("Escriba un texto:\n");
    scanf("%s", buffer);
    printf("Has escrito: %s\n", buffer);    
}

int main()
{
    echo();

    return 0;
}


