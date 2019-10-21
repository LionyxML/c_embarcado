/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura if - else.

 */

/*
 Sintaxe:
 if(expressão)  declaração(ões)
 else           declaração(ões)2

 Exemplo:
 char A=5;
 if(a)
 {
 printf("A é diferente de ZERO");
 }
 else
 {
 printf("A é igual a ZERO");
 }

 */




#include <stdio.h>                              //Necessário p/ utilizar o printf()
char A, B;

void main()
{
	A = 20;
	B = 10;

	if(A < B)						// A é menor que B ?
		printf("A e menor que B\n");			// Se sim, então escreve texto
	else
		printf("A e maior que B\n");			// Se não, escreve outro texto


	while(1);
}