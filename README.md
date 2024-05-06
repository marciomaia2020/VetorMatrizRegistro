# VetorMatrizRegistro
Aula sobre linguagem C - falando sobre Vetores (Arrays), Matrizes e Registros

Pra programar na linguagem C/C++ no Visual precisa instalar o 

mingw-get-setup.exe

https://www.youtube.com/watch?v=h96Z38oMJZA do professor Pietro

-------------------------------------------------
VETOR
--Declarando 
int A [10]; (<tipo><,nome>,[tamanho];
--Chamando
A[2];  <nome_do_vetor[indice];

MATRIZ
--Declarando 
int [A][B]  <tipo><nome>[dim1][di2]

--Chamando
A[0][2]
Coluna zero, linha zero, coluna 1, linha um e assim por diante

  REGISTRO (struct) Tipos de dados em um mesmo local

  --Declarando

  struct produto p1;
  
  struct<nome_do_registro{
<tipo><nome_do_campo>;
<tipo><nome_do_campo>;
<tipo><nome_do_campo>;
  };

  struct<nome_do_registro><nome_da_variavel>

  --Chamando
  struct produto p1    nome_da_variavel>.<campo>


MUITO UTIL COMBINAR REGISTRO E VETORES

1º Declara um novo registro
2º Cria-se um vetor de registro
  
  
