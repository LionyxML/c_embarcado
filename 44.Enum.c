/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo de Enumera��o.

*/


/*
 Enumera��o
 ==========

 S�o tipos de dados inteiros que se pode criar com uma faixa
 limitada de valores. Cada valor � representado por uma
 constante simb�lica que pode ser usada em conjunto com vari�veis
 do mesmo tipo da enumera��o.
 * S�o tipos de dados inteiros;
 * Deve conter uma lista espec�fica de valores;
 * Os valores s�o especificados por constantes simb�licas.

 Cria-se uma lista de constantes.
 Cada valor da constante simb�lica deve ser um valor maior que
 o anterior.
 Sintaxe: enum Nometipo {label0, label1, ...}
 O compilador ajusta automaticamente label0=0, label1=1, labeln=n...

 Exemplo:
 enum semana {DOM, SEG, TER, QUA, QUI, SEX, SAB};
 valores dos labels, DOM=0, SEG=1, TER=2...

 Cada label pode ter um valor.
 Os valores seguintes s�o incrementados a partir do primeiro.

 enum pessoas {Rob, Gabriel, Paulo=7, Jose, Maria}
 Valores dos labels:
 Rob=0, Gabriel=1, Paulo=7, Jose=8, Maria=9

 
 
 Como declarar uma vari�vel do tipo enumerado.
 Declara junto com a enumera��o:
 Sintaxe: enum Nometipo {lista-const} nomevar1, ...;

 Declara separado:
 enum Nometipo nomevar1, ..., nomevarn;

 Exemplo:
 enum semana {DOM, SEG, TER, QUA, QUI, SEX, SAB} hoje; //hoje � uma enumera��o semana...
 enum semana dia;   //dia � uma vari�vel tipo semana


 Pode-se tamb�m n�o utilizar a etiqueta, mas s� vale o que for declarado neste enum.
 Exemplo:
 enum {DOM, SEG, TER, QUA, QUI, SEX, SAB} hoje, amanha, depois;



 Vari�veis podem ser declaradas como tipo enumera��o
 sem o nome (label) da enumera��o.
 Sintaxe: enum {lista-const} Nometipo;

 Enumera��o pode ser utilizado como um tipo comum (compat�vel com int)
 Exemplo:
 typedef enum {DOM, SEG, TER, QUA, QUI, SEX, SAB} semana;
 
 semana dia;    //Vari�vel dia do tipo Semana.


 Utilizando uma vari�vel do tipo enumerado.
 Sintaxe: nomevar=labeln;
 Exemplo:
 enum semana {DOM, SEG, TER, QUA, QUI, SEX, SAB};
 enum semana dia;

 dia=QUA;
 dia=6;         //somente n�meros at� o limite do enum, no caso, 6
 if(dia==QUI)
 { ...


 
 */


#include <stdio.h>

enum Semana {DOM = 1,SEG,TER,QUA,QUI,SEX,SAB} Hoje; //Forcando inicio da lista como 1, se n�o tivesse colocado
                                                    //DOM seria 0 por padr�o.

enum Semana Dia;    //Vari�vel Dia do tipo Semana.

void main()
{
	Dia = TER;
	Hoje = DOM;

	if(Hoje == DOM)
		printf("Vou descansar\n");

	while(1);
}