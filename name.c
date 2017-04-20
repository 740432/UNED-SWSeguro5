#include <stdio.h>
#include <string.h>
#include <limits.h>

#define LONGITUD  50

int main(int argc, char * argv[]){

	if (argc != 2){
		printf("Usage: name <text>\n");	
		return 0;
	}

	char nombre[LONGITUD];
	
	strcpy(nombre, argv[1]);
	printf("Tu nombre es: %s\n", nombre);
	
	return 0;
}
