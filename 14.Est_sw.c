 /*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura switch.

 */



#include <stdio.h>

unsigned char A;

void main()
{
	A = 5;						// Atribui 5 à variável A
	switch(A)
	{
		case 0: printf("A tem 0\n"); break;
		case 1: printf("A tem 1\n"); break;
		case 2: printf("A tem 2\n"); break;
		case 3: printf("A tem 3\n"); break;
		case 4: printf("A tem 4\n"); break;
		case 5: printf("A tem 5\n"); break;
                case 6:
                case 7: printf("A tem 5\n"); break;  //6 ou 7 param aqui
                
		default: printf("Nao e nenhum numero de 0 a 5\n");
	}

	// Outra maneira....
	if(A==0)
		printf("A tem 0\n");
	else if(A==1)
		printf("A tem 1\n");
	else if(A==2)
		printf("A tem 2\n");
	else if(A==3)
		printf("A tem 3\n");
	else if(A==4)
		printf("A tem 4\n");
	else if(A==5)
		printf("A tem 5\n");
	else
		printf("Nao e nenhum numero de 0 a 5\n");

	while(1);
}
