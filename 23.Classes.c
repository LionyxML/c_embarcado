/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Comentários e Classes de Armazenamento.

 */



// Isto é um comentário de uma linha somente

/* Este é um comentário de mais de uma linha
e termina quando achar */

// Classes de armazenamento

const float PI = 3.141;				// Não poderá ser modificada na execução do programa
unsigned volatile int Tempo = 0;		// Variável que pode ser modificada pelo hardware
register unsigned int Contador = 10;            // Variável armazenada em registrador (Todas são!!)
auto char Letra = 'A';				// Variável automática - Este é o padrão

void funcao(void)
{
	static int TempoTodo;			// Variável local mas existe o tempo todo
}

void main()					// É comum colocar comentários aqui tambem
{

 //  PI=2;                                        //Não compilará se tentarmos modificar o
                                                //valor de PI (Declaramos Constante)

 //  TempoTodo=0;                                 // Não compilará, pois está declarada dentro
                                                // da funcao.
}