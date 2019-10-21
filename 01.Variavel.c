/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Constantes, Tipos e Declaração de Variáveis.
Utilizar o simulador Step-By-Step do MPLAB e Breakpoints.

*/



// Definição de constantes

#define Inicio 2		// Define "Inicio" como sendo igual a 2

// Declaração de variáveis

char Contador;			// Variável de 8 bits
int Tempo = 0;			// Variável de 16 bits
float a,b,c;			// Declaração de 3 variáveis na mesma linha
int A, B = 10, C;		// Declaração de 3 variáveis na mesma linha com inicialização
unsigned int Segundos;          // Variável sem sinal (positiva)
unsigned long int Anos;         // Variável de 32 bits positiva
char Nome[10];			// Matriz de 10 caracteres
const float PI = 3.14;          // Variável constante PI, não poderá ser alterada.


void main()
{
	int Timer = 0;		// Variável local de main

	Tempo = Inicio;		// Atribui 2 (Inicio) para Tempo
	a = PI;			// Atribui 3.14 à variável a
	while(1);
}
