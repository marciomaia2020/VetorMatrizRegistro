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
