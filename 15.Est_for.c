/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura for.

 */


/*
 for significa "para" e possui 3 expressões.

 for(expressão1;expressão2;expressão3)
        instrução;

 expressão1: inicialização de variáveis. Ex: i=0
 expressão2: condição para o loop continuar. Ex: i<=10
 expressão3: expressão executada à cada iteração. Ex: i++


 Observação for( ; ; ) é um loop infinito.
 
 */

#include <stdio.h>

char Contador, A, B;

void main()
{
	for(Contador = 10; Contador < 100; Contador++)		// Repete de 10 até 99
		printf("Valor do contador e %d\n",Contador);

	for(A = 0, B = 10; A < B; A+=2, B++)                    // Expressões duplas
	{
		printf("Valor do A e %d\n",A);
		printf("Valor do B e %d\n",B);
	}

	while(1);
}