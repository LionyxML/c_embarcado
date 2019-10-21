/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos operadores l�gicos.

 */


char A,B,C;

void main()
{

    /*
     O padr�o C ANSI define que qualquer n�o zero � VERDADEIRO
     e somente 0 � FALSO


     CUIDADO: & � diferente de &&
     0b1010 & 0b1101 = 0b1000               (operador Booleano E)
     0b1010 & 0b1101 = 0b0001 (VERDADEIRO)  (operador L�gico E)
     */
	A = 10;			// Atribui 10 a vari�vel A -> 00001010b
	B = 5;			// Atribui 5 a vari�vel B ->  00000101b
	C = A && B;		// Faz logica E de A com B. C ser� 1 pois A e B s�o diferente de zero
	C = A & B;		// Faz logica E bit a bit de A com B. C ser� zero

	C = A || B;		// Faz logica OU de A com B. C ser� 1 pois A ou B � diferente de zero
	C = A | B;		// Faz logica OU bit a bit de A com B. C ser� 15

	C = !A;			// C ser� zero pois negar algo diferente de zero � zero
}