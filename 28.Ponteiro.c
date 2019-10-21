/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros.

 */

/*
 Em muitas situações quando programamos, queremos ter o acesso
 à uma variável de forma indireta.

 Toda variável tem seu conteúdo armazenado e também tem um endereço.

 O que são Ponteiros? (Variável ponteiro)
 É uma variável que ao invés de armazenar um valor, armazena o endereço
 de outra variável ou função.

 Mas para que utilizar um acesso indireto?
 Eles permitem criar loops curtos executando tarefas
 repetidas como acessar uma faixa de memória.

 Exemplo:
 char *bufPtr=&buffer[0];   //Passa o endereço do char buffer p/ o ponteiro

 while (*bufPtr != '\0')    //Enquanto o conteúdo neste endereço
 *                          // de memória não for \0
 {
    WriteUART(*bufPtr);
    bufPtr++;               //Lê próximo endereço de Memória.
 }

 Características Importantes dos Ponteiros.
 * Usado em conjunto com alocação dinâmica de memória (criação de variável em
 tempo real).
 * Permite a passagem de argumentos por referência em funções.
 * Permite passar ou retornar mais de uma informação para uma função.
 * Método mais eficiente de lidar com matrizes e strings.

 Sintaxe:
 tipo *NomeDoPonteiro;
 tipo é o tipo de dado que o ponteiro ira apontar.
 Ponteiros sempre armazenam valores INTEIROS, pois não existe meio endereço de
 memória.

 Exemplos:
 int *iPtr;     //ponteiro para um inteiro
 float *fPtr;   //ponteiro para um float

 Criando um ponteiro com typedef
 Sintaxe:
 typedef type *NomeDoPonteiro

 Exemplo:
 typedef int *intPtr //cria um tipo novo, um tipo ponteiro

 intPtr p;           //declara um ponteiro para inteiro
                     //equivalente à: int *p.


 Inicialização de variáveis ponteiro.
 Para atribuir um endereço à um ponteiro, usa-se o operador de endereço &
 Não se usa neste momento o operador *.
 Exemplo:
 int x;
 int *p;
 p = &x;  //p recebe o endereço de x

 Quando queremos acessar o conteúdo da variável apontada pelo ponteiro, usa-se
 o operador *.
 Exemplo:
 y = *p;    Isso atribui o valor da variável que p aponta para y.

 

  */



#include <stdio.h>

unsigned char A, B;				// Declara uma variável A e B
unsigned char *pA;				// Declara um ponteiro p/ o tipo da variável A

const unsigned char cA = 7;			// Declara uma variável cA alocada na memória de programa
const unsigned char *pcA;			// Declara um ponteiro p/ o tipo da variável cA

const unsigned char Buffer[] = "PIC";

void main()
{
// Lendo da memória RAM

	A = 5;					// Atribui 5 à variável A
	pA = &A;				// Agora o ponteiro aponta p/ a variável A
	B = *pA;				// Passa o valor de A p/ B por meio do ponteiro

// Lendo da memória ROM

	pcA = &cA;				// Agora o ponteiro aponta p/ a variável constante cA
	B = *pcA;				// Passa o valor de cA p/ B por meio do ponteiro pcA

	pcA = Buffer;				// Copia o endereço de buffer p/ o ponteiro constante
						// Outra maneira seria: pca = &Buffer[0];	
	while(*pcA != '\0')
	{
		printf("%c",*pcA);		// Imprime buffer byte por byte
		pcA++;				// Prepara o próximo endereço
	}
	while(1);
}