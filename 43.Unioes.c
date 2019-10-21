/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo de Uni�es.

*/

/*
 Uni�es
 ======

 S�o semelhantes � estruturas, com a diferen�a que  os membros
 de uma uni�o compartilham as mesmas posi��es na memoria
 em tempos diferentes. A uniao � uma vari�vel que � capaz de
 armazenar diferentes tipos de dados em tempos diferentes.

 - Pode conter qualquer quantidade de membros
 - Membros podem ser de qualquer tipo
 - O espa�o da mem�ria que ela ir� ocupar � do tamanho do maior membro
 que ela possui
 - Usa a mesma sintaxe da estrutura exceto que struct � trocado por union

 Sintaxe:
 union NomeUni�o
 {
 tipo1 NomeDoMembro1;
 ...
 tipon NomeDoMembron;
 }

 Exemplo:
 union mixedBag
 {
     char a;
     int b;
     float c;
 }


 Como criar uma uni�o com typedef
 typedef union Etiqueta(opcional)
 {
 tipo1 NomeDoMembro1;
 ...
 tipon NomeDoMembron;
 } NomeTipo;

 Exemplo:
 typedef union
 {
     char a;
     int b;
     float c;
 }  mixedBag;


 Como as uni�es s�o armazenadas na mem�ria.
 As vari�veis originadas de uma uni�o devem ser declaradas
 exatamente como uma vari�vel originada de uma estrutura.
 A mem�ria � preparada para armazenar o maior membro da uni�o.

 Exemplo:
 typedef union
 {
     char a;
     int b;
     float c;
 }  mixedBag;

 mixedBag x;

 
 */


union MixTemp
{
	unsigned char A;
	int B;
	float C;
};

union MixTemp MinhaVar;

void main()
{
	MinhaVar.A = 10;
	MinhaVar.B = -1456;
	MinhaVar.C = 3.14;

	while(1);
}