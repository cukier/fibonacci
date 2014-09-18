/*autor: cuki mauriciocukier@gmail.com */
#include<stdio.h>

#define uint unsigned int

uint fibonacci(uint pen, uint ult, uint ateh) {
    return ult >= ateh ? ult : fibonacci(ult, ult + pen, ateh);
}

int main(void){

    uint cont = 0;

    for(cont = 0; cont < 0xFFFFFF; cont++){
        if(fibonacci(1, 1, cont) == cont){
            printf("%d ", cont);
        }
    }
    return 0;
}
