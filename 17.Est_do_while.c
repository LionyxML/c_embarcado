/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura do wihle.

 */

/*
 do while, significa faça enquanto.
 Sintaxe:
 do instrução  while (condição);

 semelhante ao while, com a diferença que o primeiro loop sempre é
 executado.

 
 */

#include <stdio.h>
unsigned char A;

void main()
{
	A = 50;
	do
	{
		A += 10;			// Ajusta A
		printf("A e igual a %d\n",A);	// Imprime o valor de A	 
	}while(A < 100);			// Enquanto A for menor que 100

	while(1);
}