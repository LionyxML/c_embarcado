/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da estrutura if.

 */

/*
 C não tem variável tipo booleana, só em C++.
 Mas existem expressões booleanas que retornam inteiros:
 0 quer dizer que o resultado da expressão é FALSO.
 Não zero quer dizer que o resultado da expressão é INTEIRO.

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
 sintaxe: if (expressão) declaração(ões)

 A declaração só será executada se a expressão retornar um valor verdadeiro.

 Otimização: if(x) vs. if(x==1)
 if(x)apenas testa de x é diferente de zero;  <= Assembly menor
 if(x==1) testa se x é igual a 1;             <= Assembly maior

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
		C++;				// Então incrementa C

	if(A < B)				// Se A for maior que B
	{					// Executa duas expressões
		C++;				// 1ª- Incrementa C
		D += C;				// 2ª- Soma D com C e o resultado vai para D
	}

	if( A < B && !E)			// Se A for menor que B e E igual a 0
		D *= 3;				// Multiplica D por 3 eo resultado vai para D

 	if(A = B)                               //Utilizou operador de atribuicao = e não ==
		printf("Sempre sera executado\n");
	while(1);
}