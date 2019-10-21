/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de funções.

 */



unsigned char a,b,c;								// Declaração de 3 variáveis

unsigned char soma(unsigned char, unsigned char);	// Protótipo de função soma

void main()
{
	a = 3;											// Atribui 3 à variável a
	b = 5;											// Atribui 5 à variável b

	c = soma(a,b);									// Chamada da função soma
	while(1);										// Loop infinito
}

unsigned char soma(unsigned char A, unsigned char B)// Definição da função soma
{
	A++;
	return(A + B);									// Executa a soma de a com b e o resultado vai para c
}