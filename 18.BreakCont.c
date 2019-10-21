/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos comandos break e continue.

 */


/*
 break significa "pare".
 Esse comando finaliza qualquer loop, independente de sua condi��o permanecer
 verdadeira.

 continue significa "continue".
 faz com que o programa volte para o in�cio do loop sem completar a itera��o

 */

#include <stdio.h>

unsigned char A;

void main()
{
	A = 0;
	while(A < 10)						// Enquanto A for menor que 10
	{							// Fa�a ...
		A++;                                            // Incremente A
		if(A == 5) break;				// Se A for igual a 5, interrompa loop de repeti��o
		printf("Loop numero %d\n",A);
	}

	A = 0;
	while(A < 10)						// Enquanto A for menor que 10
	{							// Fa�a ...
		A++;						// Incremente A
		if(A == 5) continue;                            // Se A for igual a 5, volta e testa A
		printf("Loop numero %d\n",A);
	}

	while(1);
}