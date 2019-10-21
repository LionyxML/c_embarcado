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
 while (express�o) instru��o(�es);

 A instru��o ser� executada enquanto a condi��o da express�o for verdadeira.
 � poss�vel que a isntru��o nunca seja executada se a express�o for falsa
 na primeira vez que for avaliada.

 while(1) � utilizada para um la�o infinito;

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