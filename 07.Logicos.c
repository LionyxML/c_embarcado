/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos operadores lógicos.

 */


char A,B,C;

void main()
{

    /*
     O padrão C ANSI define que qualquer não zero é VERDADEIRO
     e somente 0 é FALSO


     CUIDADO: & é diferente de &&
     0b1010 & 0b1101 = 0b1000               (operador Booleano E)
     0b1010 & 0b1101 = 0b0001 (VERDADEIRO)  (operador Lógico E)
     */
	A = 10;			// Atribui 10 a variável A -> 00001010b
	B = 5;			// Atribui 5 a variável B ->  00000101b
	C = A && B;		// Faz logica E de A com B. C será 1 pois A e B são diferente de zero
	C = A & B;		// Faz logica E bit a bit de A com B. C será zero

	C = A || B;		// Faz logica OU de A com B. C será 1 pois A ou B é diferente de zero
	C = A | B;		// Faz logica OU bit a bit de A com B. C será 15

	C = !A;			// C será zero pois negar algo diferente de zero é zero
}