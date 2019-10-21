/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Matrizes como Parâmetros.

 */

/*

 Matrizes podem ser parâmetros de função.
 A passagem não pode ser por valor e sim por referência.
 Não há sentido passar uma matriz de 1000 elementos para uma função, pois seria
 necessário jogar elemento à elemento para a variável interna da função. Isso
 não é muito eficiente.
 A forma mais eficiente é passar uma matriz por referência,
 passando o endereço do primeiro elemento da matriz para a função e essa faz um
 acesso indireto para cada elemento da matriz.

 Por exemplo:

 void writelcd(char mat1[]) {...}

 é equivalente à

 void writelcd(char *pmat1) {...}
 (normalmente feito, pois passa a função por ponteiro)
 
 */

#include <stdio.h>
unsigned char M1[] = {1,2,3,4,5,0xFF};      // Declara uma matriz M1

void Escreve(unsigned char *);              // Protótipo da função Escreve
                                                                // o ponteiro deve apontar para uma função
                                                                // do mesmo tipo da que se quer utilizar dentro
                                                                // da função escreve. Como queremos o M1 e ele é unsigned
                                                                // char, declaramos o protótipo dessa maneira.


void main()
{
	Escreve(M1);                         // Chama a função escreve, reparar que não se usa
                                             // colchete, isso envia para a função o primeiro
                                             // endereço do primeiro elemento de M1.
	
	while(1);
}

//void Escreve(unsigned char pM1[])
void Escreve(unsigned char *pM1)
{
	unsigned char i = 0;
	
	for( ; *(pM1+i) != 0xFF; i++)       //Enquanto o conteúdo de
		printf("%d",*(pM1+i));      //endereço+i for diferente de 0xFF (último elemento)
}