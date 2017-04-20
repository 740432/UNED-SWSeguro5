#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct mystruct {
    char buffer[100];
    unsigned int pass;
    int (*funcptr)(void);
};
 
int good_function(void) {
    printf("You are on the good functions.\n");
    return 0;
}
 
int secret_function(void) {
    printf("Ohhh! You got the secret!!!\n");
    return 1;
}
 
void myfunc(char *arg) {
    struct mystruct single_struct;
 
    single_struct.funcptr = good_function;
    single_struct.pass = 0xdeadbeef;
 
    strcpy(single_struct.buffer, arg);
 
    if (single_struct.pass == 0xdeadbeef)
        single_struct.funcptr();
    else
        printf("Inténtalo otra vez...\n");
}
 
int main(int argc, char **argv) {
 
    if (argc < 2) {
        printf("Uso: %s <text>\n", argv[0]);
        return(1);
    }
 
    myfunc(argv[1]);
 
    return(0);
}
