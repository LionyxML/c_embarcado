/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo dos operadores condicionais.

 */

/*

Sintaxe: (testa-expressao) ? faça-se-1 : faça-se 0;

 * Exemplo 1:
 * intx=5;
 * (x%2!=0)?
 *      printf("%d e Impar\n", x):
 *      printf("%d e Par\n", x);
 *
 * Resultado: 5 é impar.

 * Exemplo 2:
 * x = (condicao) ? a : b;
 * //se a condicao for verdadeira x=a, se não, x=b.

 * Exemplo 3: (menos utilizado)
 * (condicao) ? (x=a) : (x=b);
 * // Faz o mesmo do exemplo 2.


 */



unsigned char Tempo = 100, X;

void main()
{
	(Tempo > 50)? (X = 10): (X = 50);	// Se Tempo maior que 50 X igual a 10, caso contrário, X igual a 50
	X = (Tempo < 50)? 10: 50;		// Mesmo que o comando acima
		
	while(1);
}