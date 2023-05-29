#include <stdio.h>
void main(){
    int *pc,c;
    c=5;
    pc=&c;
    printf("Value of address of c is given by pointer variable %p\n",*pc);
    printf("Value of address of c is given by pointer variable %p",&c);

}