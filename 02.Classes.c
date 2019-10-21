/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Coment�rios e Classes de Armazenamento.

 */



// Isto � um coment�rio de uma linha somente

/* Este � um coment�rio de mais de uma linha
e termina quando achar */

// Classes de armazenamento

const float PI = 3.141;				// N�o poder� ser modificada na execu��o do programa
unsigned volatile int Tempo = 0;		// Vari�vel que pode ser modificada pelo hardware
register unsigned int Contador = 10;            // Vari�vel armazenada em registrador (Todas s�o!!)
auto char Letra = 'A';				// Vari�vel autom�tica - Este � o padr�o

void funcao(void)
{
	static int TempoTodo;			// Vari�vel local mas existe o tempo todo
}

void main()					// � comum colocar coment�rios aqui tambem
{

 //  PI=2;                                        //N�o compilar� se tentarmos modificar o
                                                //valor de PI (Declaramos Constante)

 //  TempoTodo=0;                                 // N�o compilar�, pois est� declarada dentro
                                                // da funcao.
}