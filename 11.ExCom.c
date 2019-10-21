/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo das express�es e comandos.

 */

/*
 Express�es:
 Figuras de linguagem onde um termo assume um
 significado especial do que isoladamente teria.

 Pode consistir de:
 Uma entidade �nica (constante, vari�vel, etc)
 A combina��o de entidades ligadas por operadores
 (+, -, *, /, etc...)

 Exemplos de express�es:
 a+b
 x=y
 Veloc = distancia/tempo
 z=LerEntrada()
 c<=7
 x==25
 count++
 d=a+5

 */

/*
 Comando:
 Faz com que uma a��o seja realizada. (termina com ;)
 Existe tr�s tipos de declara��o em C:
 - Comando simples
 - Comando composto
 - Comando de controle

 Comando Simples (express�o seguida de ;):
 i=0;
 i++;
 a=5+i;
 y=(m*x)+b;
 printf("Slope=%f", m);
 ;  <- � um NOP

 Comandos Compostos:
 � um conjunto de comandos simples dentro de { }
 Dentro, pode-se ter qualquer tipo de declara��o.
 � permitido construir declara��es dentro de declara��es.
 N�o se utiliza ; ap�s }
 Tamb�m � chamado de Bloco de Declara��es.

 {
 float comeco, fim;

 comeco=0.0;
 fim=400.0;
 distancia=comeco-fim;
 tempo=55.2;
 velocidade=distancia/tempo;
 printf("Velocidade=%f m/s", velocidade);
 }

 Comandos de Controle:
 � utilizado em repeti��es, saltos e testes l�gicos.
 Normalmente requer outras declara��es dentro dela.
 Exemplo:
 while (distancia<400.00)
 {
 printf("Continue Correndo!");
 distancia +=0.1;
 }


 */

char Tempo, Contador, Limite;

void main()
{
	Tempo = 10;				// Comando simples
	Tempo ++;				// Comando simples
	Contador = 150 + Tempo;			// Comando simples
	;					// Comando simples
	
	while(Limite != Tempo)			// Comando de controle
	{					// Este e o debaixo formam um comando composto
		Tempo++;			// Todo comando composto est� entre {}
		Contador += 2;                  // Ap�s } n�o se coloca ;
	}
	
	while(1);				// Comando de controle
}