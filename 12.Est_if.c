/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura if.

 */

/*
 C n�o tem vari�vel tipo booleana, s� em C++.
 Mas existem express�es booleanas que retornam inteiros:
 0 quer dizer que o resultado da express�o � FALSO.
 N�o zero quer dizer que o resultado da express�o � INTEIRO.

 int main(void)
 {
    int x=5, y, z;

    y=(x>4);            //y retorna 1
    z=(x>6);            //z retorna 0

    while(1);
 }
 */

/*
 Estrutura if
 sintaxe: if (express�o) declara��o(�es)

 A declara��o s� ser� executada se a express�o retornar um valor verdadeiro.

 Otimiza��o: if(x) vs. if(x==1)
 if(x)apenas testa de x � diferente de zero;  <= Assembly menor
 if(x==1) testa se x � igual a 1;             <= Assembly maior

 */

/*
 Estrutura if aninhada
 Significa que temos uma estrutura if dentro de outra if.
 if (teste>5)
 {
    if (monitor==5)
    {
        if (computador==2)
        {
        printf("Todos foram verdadeiros!!!"\n");
        }
    }
 }

 */


char A, B, C, D, E;

void main()
{
	A = 1;
	B = 2;
	C = 3;
	D = 4;
	E = 0;

	if(A > B)				// Se A for maior que B
		C++;				// Ent�o incrementa C

	if(A < B)				// Se A for maior que B
	{					// Executa duas express�es
		C++;				// 1�- Incrementa C
		D += C;				// 2�- Soma D com C e o resultado vai para D
	}

	if( A < B && !E)			// Se A for menor que B e E igual a 0
		D *= 3;				// Multiplica D por 3 eo resultado vai para D

 	if(A = B)                               //Utilizou operador de atribuicao = e n�o ==
		printf("Sempre sera executado\n");
	while(1);
}