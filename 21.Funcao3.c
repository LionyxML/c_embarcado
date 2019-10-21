/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de fun��es.

 */



unsigned char a,b,c;								// Declara��o de 3 vari�veis

unsigned char soma(unsigned char, unsigned char);	// Prot�tipo de fun��o soma

void main()
{
	a = 3;											// Atribui 3 � vari�vel a
	b = 5;											// Atribui 5 � vari�vel b

	c = soma(a,b);									// Chamada da fun��o soma
	while(1);										// Loop infinito
}

unsigned char soma(unsigned char A, unsigned char B)// Defini��o da fun��o soma
{
	A++;
	return(A + B);									// Executa a soma de a com b e o resultado vai para c
}