/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de fun��es.

 */



/*

 Uma fun��o pode receber valores (argumentos), podem ser passados
 para a fun��o de 2 maneiras:

 1 - Passagem por valor 
 2 - Passagem por refer�ncia

 Passagem por valor, onde as vari�veis originais n�o s�o utilizadas, mas
 copiadas para dentro da fun��o.
 Exemplo:
 int soma(int x, int y)
 {
 x=x+y;
 return x;
 }

 void main()
 {
 a=5;
 b=6;
 c=soma(a,b);

 */

/*
 Existe um recurso chamado Recursividade
 Muito �til em casos de itera��o computacional, um exemplo � o c�lculo de um
 fatorial.

 long int fatorial(int, n)
 {
 if(n<=1)
 return(1);

 else
 return(n*fatorial(n-1));
 }
 
 */

/*
 Os par�metros da fun��o podem ter os mesmos nomes das vari�veis externas. E
 vari�veis locais na fun��o n�o existem fora dela.
 Ex:
 int n;
 long int fatorial(int n) {...}

 ESSES N�O S�O OS MESMOS n

 */

/*

 Tamb�m poder� existir um #define local
 

 */

unsigned char a,b,c;				// Declara��o de 3 vari�veis

unsigned char soma(void);			// Prot�tipo de fun��o soma

void main()
{
	a = 3;							// Atribui 3 � vari�vel a
	b = 5;							// Atribui 5 � vari�vel b

	c = soma();						// Chamada da fun��o soma
	while(1);						// Loop infinito
}

unsigned char soma(void)			// Defini��o da fun��o soma
{
	return(a + b);					// Executa a soma de a com b e o resultado vai para c
}
