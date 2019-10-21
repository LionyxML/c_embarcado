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
 <=     menor ou igual  x<=y    1 se menor ou igual a y, 0 caso contrário
 >      maior que       x>y     1 se x maior que y, caso contrário 0
 >=     maior ou igual  x>=y    1 se x maior ou igual a y, 0 caso contrário
 ==     igual a         x==y    1 se x igual a y, caso contrario 0
 !=     diferente de    x!=y    1 se x diferente de y, caso contrário 0

 Cuidado para não confundir
 =  operador de ATRIBUIÇÃO
 == operador de CORRELAÇÃO
 */

	c = a > b;		// c será 0 pois a expressão resulta em falso
	c = a < b;		// c será 1 pois a expressão resulta em verdadeiro
	c = a == b;		// c será 0 pois a expressão resulta em falso
	c = a != b;		// c será 1 pois a expressão resulta em verdadeiro

	while(1);
}