/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Matrizes de Estruturas

*/

/*
 Criando matrizes de estruturas
 
 Se NomeDoTipo ou NomeDaEstrutura já foi definido:
 NomeDoTipo NomeMatriz[n];
 ou
 struct NomeDaEstrutura NomeMatriz[n];
 
 Exemplo:
 typedef struct
 {
 float re;
 float im;
 } Ncomplexo;
 ...
 Ncomplexo a[3];
 
 
 Inicializando Matrizes de Estruturas
 Sintaxe:
 NomeDoTipo NomeMatriz[n]={{lista1},...{listan}};
 ou
 struct NomeDaEstrutura NomeMatriz[n]={{list1},...,[listn}};

 typedef struct
 {
 float re;
 float im;
 } Ncomplexo;
 ...
 Ncomplexo a[2]={{1.2,2.5} , {3.9, 6.5}, {7.1, 8.4}};
 

 Usando Matrizes de Estruturas
 Sintaxe:
 NomeMatriz[n].NomeMembro

 Exemplo:
 typedef struct
 {
     float re;
     float im;
 } Ncomplexo;
 ...
 Ncomplexo a[3];

 int main(void)
 {
     a[0].re=1.25;
     a[0].im=2.50;
 ...
 }
 
 
 
 */


typedef struct				// Declara um tipo
{
	float Tensao, Corrente, Potencia;		
}Medida;

Medida Entrada1[5], Entrada2[5];	// Declara variáveis do tipo medida

void main()
{
	Entrada1[0].Tensao = 4.67;	// Registra 1ª valor medido de tensão da entrada 1
	Entrada1[1].Tensao = 6.35;	// Registra 2ª valor medido de tensão da entrada 1
	Entrada1[2].Tensao = 3.58;	// Registra 3ª valor medido de tensão da entrada 1

	Entrada2[0].Tensao = 0.67;	// Registra 1ª valor medido de tensão da entrada 1
	Entrada2[1].Tensao = 1.45;	// Registra 2ª valor medido de tensão da entrada 1
	Entrada2[2].Tensao = -6.58;	// Registra 3ª valor medido de tensão da entrada 1

	while(1);
}