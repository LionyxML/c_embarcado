/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo de Enumeração.

*/


/*
 Enumeração
 ==========

 São tipos de dados inteiros que se pode criar com uma faixa
 limitada de valores. Cada valor é representado por uma
 constante simbólica que pode ser usada em conjunto com variáveis
 do mesmo tipo da enumeração.
 * São tipos de dados inteiros;
 * Deve conter uma lista específica de valores;
 * Os valores são especificados por constantes simbólicas.

 Cria-se uma lista de constantes.
 Cada valor da constante simbólica deve ser um valor maior que
 o anterior.
 Sintaxe: enum Nometipo {label0, label1, ...}
 O compilador ajusta automaticamente label0=0, label1=1, labeln=n...

 Exemplo:
 enum semana {DOM, SEG, TER, QUA, QUI, SEX, SAB};
 valores dos labels, DOM=0, SEG=1, TER=2...

 Cada label pode ter um valor.
 Os valores seguintes são incrementados a partir do primeiro.

 enum pessoas {Rob, Gabriel, Paulo=7, Jose, Maria}
 Valores dos labels:
 Rob=0, Gabriel=1, Paulo=7, Jose=8, Maria=9

 
 
 Como declarar uma variável do tipo enumerado.
 Declara junto com a enumeração:
 Sintaxe: enum Nometipo {lista-const} nomevar1, ...;

 Declara separado:
 enum Nometipo nomevar1, ..., nomevarn;

 Exemplo:
 enum semana {DOM, SEG, TER, QUA, QUI, SEX, SAB} hoje; //hoje é uma enumeração semana...
 enum semana dia;   //dia é uma variável tipo semana


 Pode-se também não utilizar a etiqueta, mas só vale o que for declarado neste enum.
 Exemplo:
 enum {DOM, SEG, TER, QUA, QUI, SEX, SAB} hoje, amanha, depois;



 Variáveis podem ser declaradas como tipo enumeração
 sem o nome (label) da enumeração.
 Sintaxe: enum {lista-const} Nometipo;

 Enumeração pode ser utilizado como um tipo comum (compatível com int)
 Exemplo:
 typedef enum {DOM, SEG, TER, QUA, QUI, SEX, SAB} semana;
 
 semana dia;    //Variável dia do tipo Semana.


 Utilizando uma variável do tipo enumerado.
 Sintaxe: nomevar=labeln;
 Exemplo:
 enum semana {DOM, SEG, TER, QUA, QUI, SEX, SAB};
 enum semana dia;

 dia=QUA;
 dia=6;         //somente números até o limite do enum, no caso, 6
 if(dia==QUI)
 { ...


 
 */


#include <stdio.h>

enum Semana {DOM = 1,SEG,TER,QUA,QUI,SEX,SAB} Hoje; //Forcando inicio da lista como 1, se não tivesse colocado
                                                    //DOM seria 0 por padrão.

enum Semana Dia;    //Variável Dia do tipo Semana.

void main()
{
	Dia = TER;
	Hoje = DOM;

	if(Hoje == DOM)
		printf("Vou descansar\n");

	while(1);
}