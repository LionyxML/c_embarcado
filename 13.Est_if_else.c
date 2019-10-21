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
 if(express�o)  declara��o(�es)
 else           declara��o(�es)2

 Exemplo:
 char A=5;
 if(a)
 {
 printf("A � diferente de ZERO");
 }
 else
 {
 printf("A � igual a ZERO");
 }

 */




#include <stdio.h>                              //Necess�rio p/ utilizar o printf()
char A, B;

void main()
{
	A = 20;
	B = 10;

	if(A < B)						// A � menor que B ?
		printf("A e menor que B\n");			// Se sim, ent�o escreve texto
	else
		printf("A e maior que B\n");			// Se n�o, escreve outro texto


	while(1);
}