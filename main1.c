#include <stdio.h>

int main() {
    // Passo 1: Definindo uma variável x e um ponteiro y
    int x;
    int *y; // Ponteiro

    // Passo 2: Solicitar ao usuário para informar o valor 25 para x
    printf("Informe o valor para x: ");
    scanf("%d", &x); //&x o valor de x esta sendo usado como o endereço de memória de y

    // Passo 3: Fazendo o ponteiro y apontar para o endereço de x
    y = &x;

    // Passo 4: Alterando o valor no endereço apontado por y para 12
    *y = 12; // Recupera o conteudo da variável para qual o ponteiro aponta

    // Passo 5: Executando a operação y = y + 1
    y = y + 1;

    // Passo 6: Somando 5 ao valor armazenado no endereço apontado por y
    *y = *y + 5;

    // Passo 7: Imprimindo o valor de x
    printf("O valor de x é: %d\n", x);

    return 0;
}

// Utilidade de ponteiros
// Quando é preciso retornar mais de um valor em uma função
// Manipulação de vetores, matrizes e strings
// Armazenar referencias: listas encadeadas,árvores binárias, etc.
// Alocão dinâmica de memória

// Falou em vetores, matriz e strings estamos falando em ponteiros

// UMA VARIÁVEL TEM UM ENDEREÇO E UM CONTEÚDO