/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos operadores relacionais.

 */



unsigned char a, b, c;

void main()
{
	a = 3;
	b = 6;


/*
 Operadores relacionais
 <      menor que       x<y     1 se menor que x, 0 se maior
 <=     menor ou igual  x<=y    1 se menor ou igual a y, 0 caso contr�rio
 >      maior que       x>y     1 se x maior que y, caso contr�rio 0
 >=     maior ou igual  x>=y    1 se x maior ou igual a y, 0 caso contr�rio
 ==     igual a         x==y    1 se x igual a y, caso contrario 0
 !=     diferente de    x!=y    1 se x diferente de y, caso contr�rio 0

 Cuidado para n�o confundir
 =  operador de ATRIBUI��O
 == operador de CORRELA��O
 */

	c = a > b;		// c ser� 0 pois a express�o resulta em falso
	c = a < b;		// c ser� 1 pois a express�o resulta em verdadeiro
	c = a == b;		// c ser� 0 pois a express�o resulta em falso
	c = a != b;		// c ser� 1 pois a express�o resulta em verdadeiro

	while(1);
}