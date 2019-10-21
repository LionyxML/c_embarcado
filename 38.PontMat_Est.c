/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Matrizes e Ponteiros como membros
de estruturas.

*/


/*
 Strings
 - Um membro do tipo matriz de caracteres deve
 ser acessado elemento por elemento quando se quer inicializá-lo
 como uma string.
 - Já um ponteiro pode ser inicializado de uma vez só.
 Exemplo:

 struct strings
 {
     char a[4];
     char *b;
 } str;

 int main (void)
 {
     str.a[0]='B';
     str.a[1]='A';
     str.a[2]='D';
     str.a[3]='\0';

     str.b="Good";
 }

  

 */


struct Medidas
{
	char *Unidade;
}Temp, Pressao, Humidade;

void main()
{

        //Para visualizar, Utilizar Window->PIC Memory Views->Program Memory (Format Hex)
        //Ver na Watch que o conteúdo de Humidad.Unidade por exemplo é o endereço da memória
        //onde a constante está armazenada.
    
        Temp.Unidade = "Graus";
	Pressao.Unidade = "Pascal";
	Humidade.Unidade = "%";

	while(1);
}