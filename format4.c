#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

	if (argc < 2 ){
		printf("Usage: %s <text>\n", argv[0]);
		return 0;
	}

	char test[1024];
	strcpy (test, argv[1]);
	printf("\nEl formato sin vulnerabilidad es: ");
	printf("%s", test);

	printf("\n\nEl formato con vulnerabilidad es: ");	
	printf(test);
	printf("\n");

	return 0;
}
