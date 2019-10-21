/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de comparações de strings.

 */

/*
 Um erro comum if (str=="Microchip")
 Isso é errado, uma vez que se está comparando o endereço da string str com o
 endereço da string constante "Microchip".

 O modo correto de se fazer comparações é utilizar a função strcmp da biblioteca
 padrão.

 Protótipo da strcmp():
 int strcmp(const char *s1, const char *s2);
 Retorno da função strcmp():
 - Menor que 0 se s1 é menor que s2;
 - Igual a 0 se s1 é igual a s2;
 - Maior que 0 se s1 é maior que s2;
 
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