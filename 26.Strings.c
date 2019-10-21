/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de strings.

 */


/*
 Strings são conjuntos de caracteres.
 Em C utilizamos uma matriz de caracteres + dado nulo '\0'.
 Só há tipos string em c++, em c é tratada como um conjunto de caracteres.
 Sobre strings:
 São escritos entre aspas "strings';
 São finalizados com caracter NULL ('\0')
 Devem ser manipulados como matrizes de caracteres (elemento por elemento)
 Pode ser inicializado por uma string constante.

 Criação de uma matriz de caracteres:
 char NomeMatriz[Comprimento];

 char str1[10];  //Armazena 9 caracteres
 char str2[4];   //Armazena 3 caracteres

 Para inicializar essa matriz, pode-se fazer:
 char matriz[] = "Microeletronica"; //não é necessário especificar o tamanho, pois
 //o compilador irá calcular os caracteres mais o nulo (no caso 16)

 Não é necessáio inserir o nulo '\0' o compilador coloca automaticamente.

 Não se pode comparar strings usando operadores relacionais (==, !=, etc...)
 devem ser utilizadas funções especiais para se trabalhar com strings, como a
 strcmp() que retorna 0 se a string for igual.

 

 */

#include <stdio.h>

unsigned char Str1[] = "Microgenios";			// Modo 1 de se inicializar uma matriz
unsigned char Str2[] = {'P','I','C','\0'};		// Modo 2 de se inicializar uma matriz
unsigned char Str3[4];					// Apenas declarando uma matriz

void main()
{
	Str3[0] = 'P';					// Inicializando no código
	Str3[1] = 'I';								
	Str3[2] = 'C';								
	Str3[3] = '\0';	

	if(!strcmp(Str2,Str3))
		printf("As strings sao iguais\n");	
	else
		printf("As strings nao sao iguais\n");	

	while(1);						
}