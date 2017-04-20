#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int IsPasswordOK(void){
	char Password[12];
	fgets(Password, 12, stdin);

	int longitud = strlen(Password);
	Password[longitud-1]='\0';

	return strcmp(Password, "goodpass");
}

int main(void){

	int PwStatus;

	puts("Enter password: ");
	PwStatus = IsPasswordOK();
	if(PwStatus){
		puts("Access denied");
		exit(-1);	
	}
	puts ("Access granted");
	return 0;		

}

