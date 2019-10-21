/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros.

 */

/*
 Em muitas situa��es quando programamos, queremos ter o acesso
 � uma vari�vel de forma indireta.

 Toda vari�vel tem seu conte�do armazenado e tamb�m tem um endere�o.

 O que s�o Ponteiros? (Vari�vel ponteiro)
 � uma vari�vel que ao inv�s de armazenar um valor, armazena o endere�o
 de outra vari�vel ou fun��o.

 Mas para que utilizar um acesso indireto?
 Eles permitem criar loops curtos executando tarefas
 repetidas como acessar uma faixa de mem�ria.

 Exemplo:
 char *bufPtr=&buffer[0];   //Passa o endere�o do char buffer p/ o ponteiro

 while (*bufPtr != '\0')    //Enquanto o conte�do neste endere�o
 *                          // de mem�ria n�o for \0
 {
    WriteUART(*bufPtr);
    bufPtr++;               //L� pr�ximo endere�o de Mem�ria.
 }

 Caracter�sticas Importantes dos Ponteiros.
 * Usado em conjunto com aloca��o din�mica de mem�ria (cria��o de vari�vel em
 tempo real).
 * Permite a passagem de argumentos por refer�ncia em fun��es.
 * Permite passar ou retornar mais de uma informa��o para uma fun��o.
 * M�todo mais eficiente de lidar com matrizes e strings.

 Sintaxe:
 tipo *NomeDoPonteiro;
 tipo � o tipo de dado que o ponteiro ira apontar.
 Ponteiros sempre armazenam valores INTEIROS, pois n�o existe meio endere�o de
 mem�ria.

 Exemplos:
 int *iPtr;     //ponteiro para um inteiro
 float *fPtr;   //ponteiro para um float

 Criando um ponteiro com typedef
 Sintaxe:
 typedef type *NomeDoPonteiro

 Exemplo:
 typedef int *intPtr //cria um tipo novo, um tipo ponteiro

 intPtr p;           //declara um ponteiro para inteiro
                     //equivalente �: int *p.


 Inicializa��o de vari�veis ponteiro.
 Para atribuir um endere�o � um ponteiro, usa-se o operador de endere�o &
 N�o se usa neste momento o operador *.
 Exemplo:
 int x;
 int *p;
 p = &x;  //p recebe o endere�o de x

 Quando queremos acessar o conte�do da vari�vel apontada pelo ponteiro, usa-se
 o operador *.
 Exemplo:
 y = *p;    Isso atribui o valor da vari�vel que p aponta para y.

 

  */



#include <stdio.h>

unsigned char A, B;				// Declara uma vari�vel A e B
unsigned char *pA;				// Declara um ponteiro p/ o tipo da vari�vel A

const unsigned char cA = 7;			// Declara uma vari�vel cA alocada na mem�ria de programa
const unsigned char *pcA;			// Declara um ponteiro p/ o tipo da vari�vel cA

const unsigned char Buffer[] = "PIC";

void main()
{
// Lendo da mem�ria RAM

	A = 5;					// Atribui 5 � vari�vel A
	pA = &A;				// Agora o ponteiro aponta p/ a vari�vel A
	B = *pA;				// Passa o valor de A p/ B por meio do ponteiro

// Lendo da mem�ria ROM

	pcA = &cA;				// Agora o ponteiro aponta p/ a vari�vel constante cA
	B = *pcA;				// Passa o valor de cA p/ B por meio do ponteiro pcA

	pcA = Buffer;				// Copia o endere�o de buffer p/ o ponteiro constante
						// Outra maneira seria: pca = &Buffer[0];	
	while(*pcA != '\0')
	{
		printf("%c",*pcA);		// Imprime buffer byte por byte
		pcA++;				// Prepara o pr�ximo endere�o
	}
	while(1);
}