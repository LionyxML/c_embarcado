/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudar Macros e Diretivas.

 */




//Para diretivas, não se termina as linhas com ;

/*
   #include serve para icluir outro arquivo de código fonte,
  de cabeçalho, de definição ou de inicialização de arquivo.

  Existem 3 formas de se trabalhar com o include:
   #include <file.h> - procura .h no diretório do compilador
   #include "file.h" - procura no diretório onde está salvo o projeto
   #include "C:\Projeto\Cliente1\file.h" - procura em um diretório específico
 */
#include <stdio.h>
#include "03.01.Macro.h"


//Sintaxe: #diretiva identificador valor
#define Buffer 500                          //Buffer é uma constante de valor 500
#define Mensagem "Progrando em C! Uhul!"    //Mensagem é uma String constante


//Macros como funções:
#define Quadrado(x) (x)*(x)                 //(x) é o argumento e (x)*(x)
                                            //será o valor de retorno

void main()
{
	unsigned char Res;

	Res = Quadrado(10);                 //Utilizar a janela Watch do Debugador p/ ver se deu certo
	printf(Mensagem);                   //prinf padrão p/ uC sairá no UART1

	while(true);
}
