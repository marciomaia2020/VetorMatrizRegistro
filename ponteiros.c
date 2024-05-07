#include    <stdio.h>

int main(){
    int x;
    int *prt;


    x = 10;
    printf("X: %d\n" , x);
    prt = &x; 
    printf("O valor da variável PRT: %d\n" , prt);
    printf("O valor da variável PRT: %d\n" , *prt);


    x = 12;
    printf("O valor da variável X é: %d\n" , x);
    printf("O valor da variável PRT é: %d\n" , *prt);


    return 0;
}