#include <stdio.h>

int main(void){

	unsigned int num = 0xffffffff;

        printf("El número tiene %lu bits de largo\n", sizeof(num) * 8);
        printf("El número vale: 0x%x\n", num);
        printf("El número + 1 vale: 0x%x\n", num + 1);

        return 0;
}
