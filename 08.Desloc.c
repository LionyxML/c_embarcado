/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos operadores de deslocamento.

 */




unsigned char A = 5, B;
signed char C = -6, D;

void main()
{
    /*

     Tanto no deslocamento p/ esquerda quanto para a direita
     os valores que sobram são perdidos.
     Ao deslocar são preenchidos com zeros.

     Casos especiais:
     Variáveis com sinal (SIGNED), consideram o bit mais
     significativo como o sinal de negativo.

     Multiplicação e divisão por 2
     Em C é mais eficiente (gera um hexadecimal menor)
     executar multiplicação e divisão por 2
     deslocando para a direita >> é dividir 2
     deslocando para a esquerda << é multiplicar por 2
   
     */
	B = A << 1;			// Desloca o conteúdo de A uma vez para a esquerda
					// É o mesmo que multiplicar por 2. Agora B é igual a 10

	B = A >> 2;			// Desloca o conteúdo de A duas vezes para a direita
					// A = 5 --> 	00000101
					// A >> 2 --> 	00000001
					// Agora B é igual a 1

	D = C >> 2;			// Desloca para a direita uma vez
	D = C / 4;			// Divide C por 4 e passa resultado para D

	while(1);
}