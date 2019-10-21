/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura wihle.

 */


/*
 while quer dizer "enquanto".

 Sintaxe:
 while (expressão) instrução(ões);

 A instrução será executada enquanto a condição da expressão for verdadeira.
 É possível que a isntrução nunca seja executada se a expressão for falsa
 na primeira vez que for avaliada.

 while(1) é utilizada para um laço infinito;

 */

#include <stdio.h>
unsigned char A;

void main()
{
	A = 50;
	while(A < 100)				// Enquanto A for menor que 100
	{
		A += 10;			// Ajusta A
		printf("A e igual a %d\n",A);	// Imprime o valor de A	 
	}

	while(1);
}