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

 São textos criados que substituem outros textos com a
 finalidade de facilitar o entendimento do programa. Para
 isto é utilizado a diretiva #define. Macros podem ter
 parâmetros iguais a de função mas o código da macro e
 seu parâmetro são sempre inseridos no programa por uma
 substituição de texto.

 Macros:
 * São avaliados pelo PRÉ-Processamento;
 * Não são códigos executáveis por si só;
 * Pode controlar a geração do executável antes do
 processo de compilação;
 * Fornece atalhos.

 Sintaxe:
 #define label texto (substituição de texto)

 Exemplos:
 #define Fosc 4000000
 #define Tcy (0.25*(1/Fosc))
 #define Setup InitSystem(Fosc, 250, 0x5A)


 Macros com argumentos
 Sintaxe:
 #define label(arg1, ..., argn) código
 O código deve caber em uma única linha ou usar '\' para
 mais linhas.
 Não é a mesma coisa que função, é semelhante.

 #define min(x,y) ((x)<(y)?(x):(y))
 #define square(x) ((x)*(x))
 #define swap(x,y) {x^=y; y^=x; x^=y; }


 Exemplo:
 #define square(a) ((a)*(a))
 i=5;
 x=square(i++);

 Qual será o resultado? Será:
 x =30 e i=7 ?

 Não!!! x=square(i++) fica:
 x=((i++)*(i++));
 Então i é incrementado duas vezes.

 


 */


#define NumeroGrande 12345656567		// Definições
#define Calcula (0.234 * (1/NumeroGrande))
#define AoQuadrado(x) ((x)*(x))

unsigned float A, Res;      // Declara variáveis A e Res do tipo float 32 bits
unsigned char Y;            // Declara variável Y do tipo char 8 bits

void main()
{
	A = NumeroGrande;	// Substitui "NumeroGrande" pelo nº acima
	Res = Calcula; 		// Calcula na compilação e o resultado será atribuído à Res na execução
	Y = AoQuadrado(10);	// Esta macro tem argumento. Na compilação é calculado o 100

	while(1);
}