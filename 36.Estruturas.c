/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Estruturas.

*/

/*
 Estruturas são Grupos de Variáveis que podem ser de tipos
 diferentes e referenciados por um nome em comum. As variáveis
 dentro da estrutura são chamadas de membros da estrutura e podem
 ser acessadas individualmente se necessário.

 Estruturas:
 - Pode Conter qualquer quantidade de membros;
 - Membros podem ser de qualquer tipo;
 - Permite que um grupo de variáveis seja tratado como uma única entidade, mesmo
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
 Só não pode colocar funções, para isso utilizamos CLASSES.

 Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imaginária
 }

 Declarar variáveis do tipo da estrutura.
 Método 1. Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imaginária
 }  x, y;       //Declara x e y do tipo Ncomplexo

 Método 2. Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imaginária
 }
 struct Ncomplexo x, y;   //Declara x e y do tipo Ncomplexo


 Acessando uma variável do tipo da estrutura.
 Sintaxe: Nomedavariável.nomedomembro
 Exemplo:
 struct Ncomplexo
 {
    float re;   //Parte real
    float im;   //Parte imaginária
 }  x, y;       //Declara x e y do tipo Ncomplexo

 int main(void)
 {
     x.re=1.25;     //Inicializa parte real de x
     x.im=2.50;     //Inicializa parte imaginária de x
     y=x;           //Copia x em y
 }



 Também pode-se criar um tipo de estrutura com typedef
 Sintaxe:
 typedef struct NOMEDAESTRUTURA(nesse caso o nome é opcional)
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
                    //não precisa utilizar struct.




 Inicializando variáveis Estrutura na Declaração
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
}X;				// Declara uma variável do tipo NovoTipo - Modo 1

struct NovoTipo Z = {5,7,{'A','B','C'},1.25};	// Inicializando no ato da declaração

struct NovoTipo Y;	// Declara uma variável do tipo NovoTipo - Modo 2

void main()
{
	X.A = 128;	// Inicializa o membro A da variável X com 128
	Y.F = 3.14;	// Inicializa o membro F da variável Y com 3.14
	X.M[2] = 10;	// Inicializa o elemento 2 da matriz que é membro da variável X
	X.A = X.M[2];	// Copia
	Geral = Z.M[0] + X.A;

	while(1);
}