#include    <stdio.h>

int main(){
    int x;
    int *prt;


    x = 10;
    printf("X: %d\n" , x);
    prt = &x; 
    printf("O valor da variavel PRT e: %d\n" , prt);
    printf("O valor da variavel PRT e: %d\n" , *prt);


    x = 12;
    printf("O valor da variavel X e: %d\n" , x);
    printf("O valor da variavel PRT e: %d\n" , *prt);


    return 0;
}