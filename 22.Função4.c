/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de funções.

 */

#include <stdio.h>

unsigned char a,b;										// Declaração de 3 variáveis

unsigned char maior(unsigned char, unsigned char);		// Protótipo de função soma

void main()
{
	a = 9;												// Atribui 3 à variável a
	b = 5;												// Atribui 5 à variável b

	if(maior(a,b))										// Chamada da função maior
		printf("a e maior\n");
	else
		printf("b e maior\n");

	while(1);											// Loop infinito
}

unsigned char maior(unsigned char A, unsigned char B)	// Definição da função soma
{
	if(A > B)
		return 1;
	else
		return 0;
}