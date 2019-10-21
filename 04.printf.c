/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da função printf(); Utilizada para
 saída de dados.

 */


#include <stdio.h>
#pragma config WDT = OFF

void main()
{
    int A=123;

/*
 Sitaxe: printf("STRING_E_CONTROLE",arg1, arg2...);

 Imprime a string substituindo todo %d pelo argumento correspondente

 Os seguintes caracteres de conversão podem ser utilizados:
 %c     converte para caractere simples
 %s     converte para string até o nulo '\0'
 %d     converte para decimal inteiro com sinal
 %o     converte para octal inteiro
 %u     converte para decimal inteiro sem sinal
 %x     converte para hexadecimal inteiro minúsculo (Ex. 2a3b)
 %X     converte para hexadecimal inteiro maiúsculo (Ex. 3A2B)
 %f     converte para ponto flutuante com sinal
 %e     converte para decimal com sinal e expoente  (3.14e-2)
 %E     igual ao E, mas usa E para o expoente       (3.14E-3)
 %g     igual ao e ou f, mas depende da precisão
 %G     igual ao g, mas usa E para o expoente





 */

	printf("Hello World !\n");              // Imprimir no Uart1 do Simulator
        printf("ASCII = %d \n", 'a');           // Deverá mostrar: ASCII = 97
        printf("Valor = %e \n", 3.30e3)         // Deverá mostrar: 3.300000e+003
        printf("Endereço de A=%#06x\n", &A);    // #p/ 0x antes do num, 06 força
                                                // utilização de 6 caracteres,
                                                // contando o 0x.

/*
 Conclusões:
 A função printf() tem algumas limitações quando utilizada em sistemas embarcados.
 É muito útil para debugar programas.
 Pode ser usada para mostrar dados em vários formatos.
 Projetos que utilizem printf() devem incluir:
    - stdio.h
 */


	while(1);
}