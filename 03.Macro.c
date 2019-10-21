/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudar Macros e Diretivas.

 */




//Para diretivas, n�o se termina as linhas com ;

/*
   #include serve para icluir outro arquivo de c�digo fonte,
  de cabe�alho, de defini��o ou de inicializa��o de arquivo.

  Existem 3 formas de se trabalhar com o include:
   #include <file.h> - procura .h no diret�rio do compilador
   #include "file.h" - procura no diret�rio onde est� salvo o projeto
   #include "C:\Projeto\Cliente1\file.h" - procura em um diret�rio espec�fico
 */
#include <stdio.h>
#include "03.01.Macro.h"


//Sintaxe: #diretiva identificador valor
#define Buffer 500                          //Buffer � uma constante de valor 500
#define Mensagem "Progrando em C! Uhul!"    //Mensagem � uma String constante


//Macros como fun��es:
#define Quadrado(x) (x)*(x)                 //(x) � o argumento e (x)*(x)
                                            //ser� o valor de retorno

void main()
{
	unsigned char Res;

	Res = Quadrado(10);                 //Utilizar a janela Watch do Debugador p/ ver se deu certo
	printf(Mensagem);                   //prinf padr�o p/ uC sair� no UART1

	while(true);
}
