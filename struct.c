#include   <stdio.h>

struct notas{
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    float media;
};

int main(){
    struct notas aluno1;
    aluno1.nota1 = 10;
    aluno1.nota2 = 8;
    aluno1.nota3 = 7;
    aluno1.nota4 = 6;
    aluno1.media = (aluno1.nota1 + aluno1.nota2 + aluno1.nota3 + aluno1.nota4) /4;

    printf("Media: %f\n", aluno1.media);

    return 0;
}