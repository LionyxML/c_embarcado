/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo das expressões e comandos.

 */

/*
 Expressões:
 Figuras de linguagem onde um termo assume um
 significado especial do que isoladamente teria.

 Pode consistir de:
 Uma entidade única (constante, variável, etc)
 A combinação de entidades ligadas por operadores
 (+, -, *, /, etc...)

 Exemplos de expressões:
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
 Faz com que uma ação seja realizada. (termina com ;)
 Existe três tipos de declaração em C:
 - Comando simples
 - Comando composto
 - Comando de controle

 Comando Simples (expressão seguida de ;):
 i=0;
 i++;
 a=5+i;
 y=(m*x)+b;
 printf("Slope=%f", m);
 ;  <- é um NOP

 Comandos Compostos:
 É um conjunto de comandos simples dentro de { }
 Dentro, pode-se ter qualquer tipo de declaração.
 É permitido construir declarações dentro de declarações.
 Não se utiliza ; após }
 Também é chamado de Bloco de Declarações.

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
 É utilizado em repetições, saltos e testes lógicos.
 Normalmente requer outras declarações dentro dela.
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
		Tempo++;			// Todo comando composto está entre {}
		Contador += 2;                  // Após } não se coloca ;
	}
	
	while(1);				// Comando de controle
}