/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Matrizes.

 */


/*
 S�o grupos de vari�veis do mesmo tipo. Cada vari�vel individual
 � conhecida como elemento, s�o armazenadas sequencialmente na
 mem�ria. S�o identificadas na matriz por um �ndice que sempre
 inicia com zero.

 Sobre matrizes:
 * Pode conter qualquer n�mero de elementos
 * Os elementos devem ser do mesmo tipo
 * O primeiro �ndice � o zero
 * O tamanho da matriz deve ser especificado na declara��o
 * O que limita o tamanho da matriz � quantidade de mem�ria que
 o sistema possui.

 Sintaxe: tipo nomedamatriz[tamanho];
 tamanho � sempre inteiro.
 Exemplo:  int a[10];      //matriz a de 10 elementos do tipo int

 Para se inicializar uma matriz, utiliza-se uma lista de valores;
 Sintaxe: tipo nomedamatriz[tamanho]={item1,item2,item3,...};
 Exemplo: int a[5]={10, 20, 30, 40, 50};
          char c[5]={'a','b','c','d','e'};

 Matrizes s�o acessadas como vari�veis:
 nomematriz[indice]
 indice pode ser um n�mero ou uma vari�vel
 int i=4;
 a[i]=5;

 Observa��o, jamais utilizar �ndice maior que o declarado. O compilador
 n�o checa se a posi��o existe e ir� sobrescrever algum espa�o de mem�ria.

 */


unsigned char M1[5]={0};			// Declara e inicializa todos os elementos com zero
unsigned char M2[5]={10,11,12,13,14};		// Declara e inicializa todos os elementos com algum n�mero
unsigned char M3[5]={10,11};			// Declara e inicializa os elementos 0 e 1 com 10 e 11 respectivamente
						// Os demais elementos ficam com zero
unsigned char i;

void main()
{
	M1[0] = 10;				// Inicializa o elemento 0 da matriz M1 com 10
	M1[4] = 9;				// Inicializa o �ltimo elemento da matriz M1 com 8
	M1[1] = M2[0];				// Copia elemento 0 de M2 p/ o elemento 1 de M1

	M1[2] = M1[1] + M1[4];
	M1[2] = M1[1] * M1[4];
	M1[2]++;
	M1[3] += 4;

	for(i = 0; i < 5; i++)
		M1[i] = 0;

	while(1);
}