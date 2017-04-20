#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	if (argc < 2)
	{
		printf("Usage: %s file.txt\n", argv[0]);
		return 0;	
	}

	char *file_name = argv[1];
	char line[100];

	FILE* fd=fopen(file_name, "r");

	//sentencia de espera
	printf("Press Enter to continue: ");
	char i = getchar();

	fgets(line, 100, fd);
   	printf("The file content is: %s\n", line );

	fclose(fd);

	return 0;
}


