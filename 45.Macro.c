/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo de Macros.

*/

/*
 MACROS
 ======

 Macro #define

 S�o textos criados que substituem outros textos com a
 finalidade de facilitar o entendimento do programa. Para
 isto � utilizado a diretiva #define. Macros podem ter
 par�metros iguais a de fun��o mas o c�digo da macro e
 seu par�metro s�o sempre inseridos no programa por uma
 substitui��o de texto.

 Macros:
 * S�o avaliados pelo PR�-Processamento;
 * N�o s�o c�digos execut�veis por si s�;
 * Pode controlar a gera��o do execut�vel antes do
 processo de compila��o;
 * Fornece atalhos.

 Sintaxe:
 #define label texto (substitui��o de texto)

 Exemplos:
 #define Fosc 4000000
 #define Tcy (0.25*(1/Fosc))
 #define Setup InitSystem(Fosc, 250, 0x5A)


 Macros com argumentos
 Sintaxe:
 #define label(arg1, ..., argn) c�digo
 O c�digo deve caber em uma �nica linha ou usar '\' para
 mais linhas.
 N�o � a mesma coisa que fun��o, � semelhante.

 #define min(x,y) ((x)<(y)?(x):(y))
 #define square(x) ((x)*(x))
 #define swap(x,y) {x^=y; y^=x; x^=y; }


 Exemplo:
 #define square(a) ((a)*(a))
 i=5;
 x=square(i++);

 Qual ser� o resultado? Ser�:
 x =30 e i=7 ?

 N�o!!! x=square(i++) fica:
 x=((i++)*(i++));
 Ent�o i � incrementado duas vezes.

 


 */


#define NumeroGrande 12345656567		// Defini��es
#define Calcula (0.234 * (1/NumeroGrande))
#define AoQuadrado(x) ((x)*(x))

unsigned float A, Res;      // Declara vari�veis A e Res do tipo float 32 bits
unsigned char Y;            // Declara vari�vel Y do tipo char 8 bits

void main()
{
	A = NumeroGrande;	// Substitui "NumeroGrande" pelo n� acima
	Res = Calcula; 		// Calcula na compila��o e o resultado ser� atribu�do � Res na execu��o
	Y = AoQuadrado(10);	// Esta macro tem argumento. Na compila��o � calculado o 100

	while(1);
}