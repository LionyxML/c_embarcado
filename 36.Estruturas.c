/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Estruturas.

*/

/*
 Estruturas s�o Grupos de Vari�veis que podem ser de tipos
 diferentes e referenciados por um nome em comum. As vari�veis
 dentro da estrutura s�o chamadas de membros da estrutura e podem
 ser acessadas individualmente se necess�rio.

 Estruturas:
 - Pode Conter qualquer quantidade de membros;
 - Membros podem ser de qualquer tipo;
 - Permite que um grupo de vari�veis seja tratado como uma �nica entidade, mesmo
 de tipos diferentes;
 - Modo simples de se organizar dados complexos.

 Sintaxe:
 struct NOMEDAESTRUTURA
 {
 tipo1 Nomedomembro1;
 ...
 tipon Nomedomembron;
 }

 Pode-se colocar dentro da estrutura, outras estruturas, matrizes, etc.
 S� n�o pode colocar fun��es, para isso utilizamos CLASSES.

 Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imagin�ria
 }

 Declarar vari�veis do tipo da estrutura.
 M�todo 1. Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imagin�ria
 }  x, y;       //Declara x e y do tipo Ncomplexo

 M�todo 2. Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imagin�ria
 }
 struct Ncomplexo x, y;   //Declara x e y do tipo Ncomplexo


 Acessando uma vari�vel do tipo da estrutura.
 Sintaxe: Nomedavari�vel.nomedomembro
 Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imagin�ria
 }  x, y;       //Declara x e y do tipo Ncomplexo

 int main(void)
 {
     x.re=1.25;     //Inicializa parte real de x
     x.im=2.50;     //Inicializa parte imagin�ria de x
     y=x;           //Copia x em y
 }



 Tamb�m pode-se criar um tipo de estrutura com typedef
 Sintaxe:
 typedef struct NOMEDAESTRUTURA(nesse caso o nome � opcional)
 {
 tipo1 Nomedomembro1;
 ...
 tipon Nomedomembron;
 } NomeDoTipo;

 Exemplo:
 typedef struct
 {
 float re;
 float im;
 } Ncomplexo;

 Ncomplexo x, y;    //Declara x e y do tupo Ncomplexo, repare que
                    //n�o precisa utilizar struct.




 Inicializando vari�veis Estrutura na Declara��o
 Exemplo:
 typedef struct
 {
 float re;
 float im;
 } Ncomplexo;
 ...
 Ncomplexo x={1.25, 2.50}   //x.re=1.25, x.im=2.50
 
 

 */


unsigned char Geral;
struct NovoTipo			// Declara uma estrutura NovoTipo
{
	unsigned char A;	// Declara um membro do tipo char
	unsigned int B;		// Declara um membro do tipo int
	unsigned char M[3];	// Declara um membro matriz do tipo char
	float F;		// Declara um membro do tipo float
}X;				// Declara uma vari�vel do tipo NovoTipo - Modo 1

struct NovoTipo Z = {5,7,{'A','B','C'},1.25};	// Inicializando no ato da declara��o

struct NovoTipo Y;	// Declara uma vari�vel do tipo NovoTipo - Modo 2

void main()
{
	X.A = 128;	// Inicializa o membro A da vari�vel X com 128
	Y.F = 3.14;	// Inicializa o membro F da vari�vel Y com 3.14
	X.M[2] = 10;	// Inicializa o elemento 2 da matriz que � membro da vari�vel X
	X.A = X.M[2];	// Copia
	Geral = Z.M[0] + X.A;

	while(1);
}