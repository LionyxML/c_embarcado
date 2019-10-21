/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos Operadores Aritim�ticos.

 */


unsigned int a,b,c;
signed short int x;
unsigned short float f, g, h;

void main()
{
    
/* Operador de Atribui��o:
 
 � um operador que atribui um valor � uma vari�vel
 -Atribui��o simples: vari�vel=express�o;
 -Atribui��o composta: vari�vel=vari�vel op express�o;
 onde op � uma opera��o, +, -, *...

 Operadores:
 =      x=y     Atribui o valor de y � x
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

// Opera��es b�sicas com inteiro

	c = a + b;				// Soma a com b e o resultado vai para c
	c = a - b;				// Subtrai a e b e o resultado vai para c
	c = a * b;				// Multiplica a com b e o resultado vai para c
	c = a / b;				// Divide a por b e o resultado vai para c
	c = b / a;				// Divide b por a e o resultado vai para c
	c = b % 2;				// O c receber� o resto da divis�o inteira de b com 2
	c = -b;					// O c recebe 65531
	x = -b;					// O x recebe -5 porque � vari�vel que aceita sinal

// Opera��es b�sicas com ponto flutuante

	f = g + h;
	f = g / h;				// Divide g (4) por h (2)

// Opera��es b�sicas com inteiro e ponto flutuante

	f = a;					// 10 inteiro � convertido para 10 em ponto flutuante
	f = b / 2;				// O valor � truncado
	f = (float)b / 2;                       // O valor correto ser� entregue � f
	f = (float)b / a;                       // Mesmo que no exemplo anterior

// Opera��es de incremento e de decremento

	a++;					// Incrementa a
	c = ++a;				// Primeiro incrementa a depois atribui para c o resultado
	c += 5;					// � a mesma coisa que c = c + 5

/*

 Convers�o Implicita
 int/int=int mesmo que a sa�da seja float, n�o h� decimal
 float/int=fload

 Convers�o Explicita
 Ex.:
 int x=10;
 float y=3.0, z;
 z=x*y  //aqui x ser� "promovido" para float
        //mas essa convers�o s� vale para a conta
        //� tempor�ria.

 Convers�o impl�cita em express�es Aritim�ticas
 considerando short x=-5;
 -x     � promovido para int
 x*-2L  x � promovido tempor�riamente para long
 8/x    x � promovido tempor�riamente para int
 8%x    x � promovido tempor�riamente para int
 8.0/x  x � promovido tempor�riamente para double


 Incremento e Decremento
 x++        //usa x e depois incrementa
 ++x        //incrementa x e depois usa
 x--        //usa e depois incrementa
 --x        //decrementa x e depois usa
 
 */   

	while(1);
}