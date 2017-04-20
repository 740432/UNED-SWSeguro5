#include <stdio.h>

static void destructor(void) __attribute__ ((destructor));

void evil(void)
{
	printf("EVIL thing\n");
}

void destructor(void)
{
	printf("destructor: %p\n",(void *)destructor);
}

int main(void)
{

	int *punter=(int *)0x00001ee8;
	printf("dins\n");
	*punter = 0x000005c0;
	return 0;
}
