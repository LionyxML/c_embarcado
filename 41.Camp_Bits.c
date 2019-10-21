/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo de Campos de Bits.

*/


/*

 Campos de Bits
 ==============

 Campos de Bits s�o membros de uma estrutura do tipo
 unsigned int que ocupa um n�mero espec�fico de bits
 adjacentes. Podem ser utilizados como uma vari�vel
 inteira comum e realizar opera��es aritim�ticas e
 l�gicas.
 * S�o membros comuns de uma estrutura.
 * Tem um tamanho espec�fico de bits.
 * S�o usados em conjunto com uni�es para ter acesso aos
 bits de uma vari�vel sem mascarar opera��es.


 Sintaxe: (Obrigatoriamente int sem sinal)
 struct NomeDaEstrutura
 {
 unsigned int NomeMembro1 : NumBits;
 ...
 unsigned int NomeMembro2 : NumBits;
 }

 Exemplo:
 typedef struct
 {
 unsigned int bit0: 1;
 unsigned int bit1to3: 3;
 unsigned int bit4: 1;
 unsigned int bit5: 1;
 unsigned int bit6to7: 2;
 } byteBits;


 Exemplo:



 struct byteBits
 {
	unsigned a:1;
	unsigned b:1;
	unsigned c:2;
	unsigned d:1;
	unsigned e:3;
 }x;

 int main(void)
 {
 x.a=1;     //x.a pode conter valores de 0 at� 1
 x.b=0;     //x.a pode conter valores de 0 at� 1
 x.c=0b10;  //x.a pode conter valores de 0 at� 3
 x.d=0x0;   //x.a pode conter valores de 0 at� 1
 x.e=7;     //x.a pode conter valores de 0 at� 7

 //Na mem�ria (RAM)
 //   eeedccba
 //x  11101001

 
 */

typedef struct
{
	unsigned a:1;		// Cria uma vari�vel de 1 bit
	unsigned b:3;		// Cria uma vari�vel de 3 bits
	unsigned c:4;		// Cria uma vari�vel de 4 bits
}ByteBits;

ByteBits X;			// Declara uma vari�vel X do tipo ByteBits

void main()
{
	X.a = 1;		// Seta o bit 0 de X
	X.b = 7;		// Seta os bits 1,2 e 3 de X
	X.c = 1;		// Seta o bit 4 de X
	X.c <<= 1;		// Rotaciona uma vez para esquerda c de X
	X.c <<= 1;		// Rotaciona uma vez para esquerda c de X
	X.c <<= 1;		// Rotaciona uma vez para esquerda c de X
	X.c <<= 1;		// Rotaciona uma vez para esquerda c de X

	while(1);
}