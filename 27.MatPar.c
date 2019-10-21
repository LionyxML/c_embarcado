/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Matrizes como Par�metros.

 */

/*

 Matrizes podem ser par�metros de fun��o.
 A passagem n�o pode ser por valor e sim por refer�ncia.
 N�o h� sentido passar uma matriz de 1000 elementos para uma fun��o, pois seria
 necess�rio jogar elemento � elemento para a vari�vel interna da fun��o. Isso
 n�o � muito eficiente.
 A forma mais eficiente � passar uma matriz por refer�ncia,
 passando o endere�o do primeiro elemento da matriz para a fun��o e essa faz um
 acesso indireto para cada elemento da matriz.

 Por exemplo:

 void writelcd(char mat1[]) {...}

 � equivalente �

 void writelcd(char *pmat1) {...}
 (normalmente feito, pois passa a fun��o por ponteiro)
 
 */

#include <stdio.h>
unsigned char M1[] = {1,2,3,4,5,0xFF};      // Declara uma matriz M1

void Escreve(unsigned char *);              // Prot�tipo da fun��o Escreve
                                                                // o ponteiro deve apontar para uma fun��o
                                                                // do mesmo tipo da que se quer utilizar dentro
                                                                // da fun��o escreve. Como queremos o M1 e ele � unsigned
                                                                // char, declaramos o prot�tipo dessa maneira.


void main()
{
	Escreve(M1);                         // Chama a fun��o escreve, reparar que n�o se usa
                                             // colchete, isso envia para a fun��o o primeiro
                                             // endere�o do primeiro elemento de M1.
	
	while(1);
}

//void Escreve(unsigned char pM1[])
void Escreve(unsigned char *pM1)
{
	unsigned char i = 0;
	
	for( ; *(pM1+i) != 0xFF; i++)       //Enquanto o conte�do de
		printf("%d",*(pM1+i));      //endere�o+i for diferente de 0xFF (�ltimo elemento)
}