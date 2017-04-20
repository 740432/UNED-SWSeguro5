#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Introduzca contraseña: \n");
    gets(buff);

    if(strcmp(buff, "carolUNED"))
    {
        printf ("\n Contraseña incorrecta. \n");
    }
    else
    {
        printf ("\n Contraseña correcta. \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}
