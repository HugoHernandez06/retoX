#include <stdio.h>
#include <stdlib.h>

void funcPrint(void);
void funcAl1(void);


int main(void) {
    
    funcPrint();
    funcAl1();
    printf("Hola Mundo\n");
    return EXIT_SUCCESS;

}

void funcPrint(void){
    printf("Hola Mundo\n");
}

void funcAl1(void){
    printf("Hi\n");
    printf("Bye\n");
}