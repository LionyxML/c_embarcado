/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Constantes, Tipos e Declara��o de Vari�veis.
Utilizar o simulador Step-By-Step do MPLAB e Breakpoints.

*/



// Defini��o de constantes

#define Inicio 2		// Define "Inicio" como sendo igual a 2

// Declara��o de vari�veis

char Contador;			// Vari�vel de 8 bits
int Tempo = 0;			// Vari�vel de 16 bits
float a,b,c;			// Declara��o de 3 vari�veis na mesma linha
int A, B = 10, C;		// Declara��o de 3 vari�veis na mesma linha com inicializa��o
unsigned int Segundos;          // Vari�vel sem sinal (positiva)
unsigned long int Anos;         // Vari�vel de 32 bits positiva
char Nome[10];			// Matriz de 10 caracteres
const float PI = 3.14;          // Vari�vel constante PI, n�o poder� ser alterada.


void main()
{
	int Timer = 0;		// Vari�vel local de main

	Tempo = Inicio;		// Atribui 2 (Inicio) para Tempo
	a = PI;			// Atribui 3.14 � vari�vel a
	while(1);
}
