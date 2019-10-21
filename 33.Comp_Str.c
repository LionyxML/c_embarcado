/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de compara��es de strings.

 */

/*
 Um erro comum if (str=="Microchip")
 Isso � errado, uma vez que se est� comparando o endere�o da string str com o
 endere�o da string constante "Microchip".

 O modo correto de se fazer compara��es � utilizar a fun��o strcmp da biblioteca
 padr�o.

 Prot�tipo da strcmp():
 int strcmp(const char *s1, const char *s2);
 Retorno da fun��o strcmp():
 - Menor que 0 se s1 � menor que s2;
 - Igual a 0 se s1 � igual a s2;
 - Maior que 0 se s1 � maior que s2;
 
 */

#include <stdio.h>
#include <string.h>

const unsigned char Str1[] = "Microchip";
const unsigned char Str2[] = "Microchip";

void main()
{
	if(!strcmp(Str1,Str2))
		printf("As strings sao iguais\n");
	else
		printf("As strings NAO sao iguais\n");

	while(1);
}