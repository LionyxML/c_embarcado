/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros e strings.

 */

/*
 Sempre trabalhamos com strings como uma matriz de caracteres
 (tipo char)

 Strings podem ser usadas como ponteiros de maneira muito elegante.

 Declaração de string com ponteiro:
 char *str="PIC";
 A implementação de strings depende do compilador e da arquitetura.

 Sintaxes:
 *str = str[0]   ou   str=&str[0]

 Exemplo:
 char *str = "Microcontrolador";
 //Armazena M i c r o c o n t r o l a d o r \0
 *str='M';   //seta str[0]='M'
 *(str+4) == 'o';


 */

/*
 Ponteiros x Matrizes
 
 Inicialização:
 Ponteirs:  char *str="PIC";
 Matriz:    char str[]="PIC";
            char str[4]="PIC";
 
 Atribuição de valores:
 Ponteiro:  char *str;   str="PIC";
 Matriz:    char str[4]; str[0]='P'; ...
 Em matrizes é necessário inserir os dados caracter à caracter...

 
 
 */


unsigned char M1[] = "PIC";		// Declara um ponteiro para uma string
unsigned char A = 1, *Str;		// Declara A e um ponteiro

void main()
{
	Str = M1;		// Passa o endereço da Matriz para o ponteiro
	A = *Str;		// Passa P p/ A via ponteiro
	A = Str[2];		// Passa C p/ A via ponteiro - Outra forma
	A = *(Str+1);		// Passa I p/ A via ponteiro

	while(1);
}