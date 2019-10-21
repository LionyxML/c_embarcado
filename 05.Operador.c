/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos Operadores Aritiméticos.

 */


unsigned int a,b,c;
signed short int x;
unsigned short float f, g, h;

void main()
{
    
/* Operador de Atribuição:
 
 É um operador que atribui um valor à uma variável
 -Atribuição simples: variável=expressão;
 -Atribuição composta: variável=variável op expressão;
 onde op é uma operação, +, -, *...

 Operadores:
 =      x=y     Atribui o valor de y à x
 +=     x+=y    x=x+y
 -=     x-=y    x=x-y
 *=     x*=y    x=x*y
 /=     x/=y    x=x/y
 %=     x%=y    x=x%y
 &=     x&=y    x=x&y
 ^=     x^=y    x=x^y
 |=     x|=y    x=x|y
 <<=    x<<=y   x=x<<y
 >>=    x>>=y   x=x>>y
 */
        a = 10;					// Atribui a com 10
	b = 5;					// Atribui b com 5
	g = 4.0f;				// Atribui g com 4
	h = 2; 					// Atribui h com 2

// Operações básicas com inteiro

	c = a + b;				// Soma a com b e o resultado vai para c
	c = a - b;				// Subtrai a e b e o resultado vai para c
	c = a * b;				// Multiplica a com b e o resultado vai para c
	c = a / b;				// Divide a por b e o resultado vai para c
	c = b / a;				// Divide b por a e o resultado vai para c
	c = b % 2;				// O c receberá o resto da divisão inteira de b com 2
	c = -b;					// O c recebe 65531
	x = -b;					// O x recebe -5 porque é variável que aceita sinal

// Operações básicas com ponto flutuante

	f = g + h;
	f = g / h;				// Divide g (4) por h (2)

// Operações básicas com inteiro e ponto flutuante

	f = a;					// 10 inteiro é convertido para 10 em ponto flutuante
	f = b / 2;				// O valor é truncado
	f = (float)b / 2;                       // O valor correto será entregue à f
	f = (float)b / a;                       // Mesmo que no exemplo anterior

// Operações de incremento e de decremento

	a++;					// Incrementa a
	c = ++a;				// Primeiro incrementa a depois atribui para c o resultado
	c += 5;					// É a mesma coisa que c = c + 5

/*

 Conversão Implicita
 int/int=int mesmo que a saída seja float, não há decimal
 float/int=fload

 Conversão Explicita
 Ex.:
 int x=10;
 float y=3.0, z;
 z=x*y  //aqui x será "promovido" para float
        //mas essa conversão só vale para a conta
        //é temporária.

 Conversão implícita em expressões Aritiméticas
 considerando short x=-5;
 -x     é promovido para int
 x*-2L  x é promovido temporáriamente para long
 8/x    x é promovido temporáriamente para int
 8%x    x é promovido temporáriamente para int
 8.0/x  x é promovido temporáriamente para double


 Incremento e Decremento
 x++        //usa x e depois incrementa
 ++x        //incrementa x e depois usa
 x--        //usa e depois incrementa
 --x        //decrementa x e depois usa
 
 */   

	while(1);
}