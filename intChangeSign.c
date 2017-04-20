#include <stdio.h>
#include <limits.h>

int main(void){
	int l;
        l = 0x7fffffff;

	printf("Una variable tipo entero está en el rango [%d, %d]\n", INT_MIN, INT_MAX);
        printf("La variable int vale l = %d (0x%x)\n", l, l);
        printf("Si sumo 1 a la variable: l + 1 = %d (0x%x)\n", l + 1 , l + 1);

        return 0;
}
