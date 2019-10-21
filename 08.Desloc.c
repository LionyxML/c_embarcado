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
     os valores que sobram s�o perdidos.
     Ao deslocar s�o preenchidos com zeros.

     Casos especiais:
     Vari�veis com sinal (SIGNED), consideram o bit mais
     significativo como o sinal de negativo.

     Multiplica��o e divis�o por 2
     Em C � mais eficiente (gera um hexadecimal menor)
     executar multiplica��o e divis�o por 2
     deslocando para a direita >> � dividir 2
     deslocando para a esquerda << � multiplicar por 2
   
     */
	B = A << 1;			// Desloca o conte�do de A uma vez para a esquerda
					// � o mesmo que multiplicar por 2. Agora B � igual a 10

	B = A >> 2;			// Desloca o conte�do de A duas vezes para a direita
					// A = 5 --> 	00000101
					// A >> 2 --> 	00000001
					// Agora B � igual a 1

	D = C >> 2;			// Desloca para a direita uma vez
	D = C / 4;			// Divide C por 4 e passa resultado para D

	while(1);
}