/*  Neste exemplo, a função trocarValores recebe dois ponteiros para inteiros (int *ptr1 e int *ptr2). 
    Ela usa esses ponteiros para acessar os valores das variáveis originais e trocar seus valores entre si. 
    No main(), você pode ver   como chamar essa função passando os endereços das variáveis a e b usando o operador &.
*/


#include <stdio.h>

// Função para trocar os valores de duas variáveis usando ponteiros
void trocarValores(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    // Passando os endereços das variáveis 'a' e 'b' para a função
    trocarValores(&a, &b);

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}

