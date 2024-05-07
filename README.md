# VetorMatrizRegistro
Aula sobre linguagem C - falando sobre Vetores (Arrays), Matrizes e Registros

Pra programar na linguagem C/C++ no Visual precisa instalar o 

mingw-get-setup.exe

https://www.youtube.com/watch?v=h96Z38oMJZA do professor Pietro


SET A VARIÁVEL DE AMBIENTE
PATH/NOVO  C:\MinGW\bin

DEPOIS NO VISUAL ACHE E INSTALE
C/C++ IntelliSence, deboggin and code browsing
C/C++ Compile Run



***************************RESUMO SEGUIR 4 PASSOS***************************


Instalar o mingw						(https://sourceforge.net/projects/mingw/)
Configurar Variável de Ambiente			 Windows + R  (sysdm.cpl) ou pesquisar por (editar as variáveis de ambiente do sistemas) em PATH coloque o caminho da instalação do mingw (C:\MinGW\bin)
Instalar o VScode 						(https://code.visualstudio.com/Download)
Instalar os plugins no VScode			 C/C++ IntelliSence, deboggin and code browsing  /   C/C++ Compile Run



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

  
