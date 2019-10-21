/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo de Uniões.

*/

/*
 Uniões
 ======

 São semelhantes à estruturas, com a diferença que  os membros
 de uma união compartilham as mesmas posições na memoria
 em tempos diferentes. A uniao é uma variável que é capaz de
 armazenar diferentes tipos de dados em tempos diferentes.

 - Pode conter qualquer quantidade de membros
 - Membros podem ser de qualquer tipo
 - O espaço da memória que ela irá ocupar é do tamanho do maior membro
 que ela possui
 - Usa a mesma sintaxe da estrutura exceto que struct é trocado por union

 Sintaxe:
 union NomeUnião
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


 Como criar uma união com typedef
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


 Como as uniões são armazenadas na memória.
 As variáveis originadas de uma união devem ser declaradas
 exatamente como uma variável originada de uma estrutura.
 A memória é preparada para armazenar o maior membro da união.

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