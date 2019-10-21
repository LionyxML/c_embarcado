/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura for.

 */


/*
 for significa "para" e possui 3 express�es.

 for(express�o1;express�o2;express�o3)
        instru��o;

 express�o1: inicializa��o de vari�veis. Ex: i=0
 express�o2: condi��o para o loop continuar. Ex: i<=10
 express�o3: express�o executada � cada itera��o. Ex: i++


 Observa��o for( ; ; ) � um loop infinito.
 
 */

#include <stdio.h>

char Contador, A, B;

void main()
{
	for(Contador = 10; Contador < 100; Contador++)		// Repete de 10 at� 99
		printf("Valor do contador e %d\n",Contador);

	for(A = 0, B = 10; A < B; A+=2, B++)                    // Express�es duplas
	{
		printf("Valor do A e %d\n",A);
		printf("Valor do B e %d\n",B);
	}

	while(1);
}