/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Matrizes Muldimensionais.

 */

/*

 Matrizes podem ter qualquer dimens�o.
 Matrizes de 2 dimens�es s�o normalmente encontradas em c�digos fonte de displays
 gr�ficos.
 Sintaxe: int a[10] [10];   //Matriz de 10x10 = 100 inteiros
 float b[10] [10] [10];     //Matriz de 10x10x10 = 100 floats

 Para se inicializar matrizes multidimensionais.
 char a[3] [2] = {{'X', 'O'},
                  {'O', 'O'},
                 {'X', 'X'}};

 

 */

unsigned char M2D[3][2] = {{'A','B'},{'C','D'},{'E','F'}};  // Declara��o de uma matriz de 2 dimens�es
unsigned char A,i,j;

void main()
{
	A = M2D[0][0];                                      // Atribui o elemento da linha 0 coluna 0
	
	for(i = 0; i < 3; i++)                              //Lembrando de 0 at� <3, roda 3 vezes.
	{
		for(j = 0; j < 2; j++)
			M2D[i][j] = 0;
	}
	for(;;);                                            // Loop infinito
}

