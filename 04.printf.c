/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da fun��o printf(); Utilizada para
 sa�da de dados.

 */


#include <stdio.h>
#pragma config WDT = OFF

void main()
{
    int A=123;

/*
 Sitaxe: printf("STRING_E_CONTROLE",arg1, arg2...);

 Imprime a string substituindo todo %d pelo argumento correspondente

 Os seguintes caracteres de convers�o podem ser utilizados:
 %c     converte para caractere simples
 %s     converte para string at� o nulo '\0'
 %d     converte para decimal inteiro com sinal
 %o     converte para octal inteiro
 %u     converte para decimal inteiro sem sinal
 %x     converte para hexadecimal inteiro min�sculo (Ex. 2a3b)
 %X     converte para hexadecimal inteiro mai�sculo (Ex. 3A2B)
 %f     converte para ponto flutuante com sinal
 %e     converte para decimal com sinal e expoente  (3.14e-2)
 %E     igual ao E, mas usa E para o expoente       (3.14E-3)
 %g     igual ao e ou f, mas depende da precis�o
 %G     igual ao g, mas usa E para o expoente





 */

	printf("Hello World !\n");              // Imprimir no Uart1 do Simulator
        printf("ASCII = %d \n", 'a');           // Dever� mostrar: ASCII = 97
        printf("Valor = %e \n", 3.30e3)         // Dever� mostrar: 3.300000e+003
        printf("Endere�o de A=%#06x\n", &A);    // #p/ 0x antes do num, 06 for�a
                                                // utiliza��o de 6 caracteres,
                                                // contando o 0x.

/*
 Conclus�es:
 A fun��o printf() tem algumas limita��es quando utilizada em sistemas embarcados.
 � muito �til para debugar programas.
 Pode ser usada para mostrar dados em v�rios formatos.
 Projetos que utilizem printf() devem incluir:
    - stdio.h
 */


	while(1);
}