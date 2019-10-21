/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de fun��es.

 */

#include <stdio.h>

unsigned char a,b;										// Declara��o de 3 vari�veis

unsigned char maior(unsigned char, unsigned char);		// Prot�tipo de fun��o soma

void main()
{
	a = 9;												// Atribui 3 � vari�vel a
	b = 5;												// Atribui 5 � vari�vel b

	if(maior(a,b))										// Chamada da fun��o maior
		printf("a e maior\n");
	else
		printf("b e maior\n");

	while(1);											// Loop infinito
}

unsigned char maior(unsigned char A, unsigned char B)	// Defini��o da fun��o soma
{
	if(A > B)
		return 1;
	else
		return 0;
}