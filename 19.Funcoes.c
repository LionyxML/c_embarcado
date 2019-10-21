/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de fun��es.

 */

/*
 Fun��es s�o segmentos de c�digo de programa alocados
 em um endere�o espec�fico da mem�ria de programa com o
 objetivo de executar uma tarefa bem definida.

 Todos os programas em C tem uma ou mais fun��es;
 Sempre deve existir a fun��o main();
 Fun��es podem aceitar par�metros como entrada de dados;
 Fun��es normalmente retornam apenas um valor;
 Fun��es ajudam a estruturar o programa de maneira logica e
 organizada.
 
 */

/*
 Sintaxe:
 tipo identificador(tipo1, arg1, tipo2, arg2,...) (par�metros s�o opcionais)
 {
 declara��es;
 express�es;
 return express�o; (opcional)
 }

 IMPORTANTE, o tipo deve ser do mesmo tipo do retorno!!!

 A fun��o ser� do tipo void se a instru��o return n�o tiver uma express�o ou
 N�o existie a fun��o return.


 Para se chamar uma fun��o, deve-se entrar com seu nome.
 Sintaxes (exemplo para a fun��o foo():
 foo();    //chama foo sem pegar retorno ou entrar com par�metros
 x=foo();  //define x como o retorno de foo() sem entrar com par�metros
 foo(a,b); //chama foo sem gravar retorno entrando com vari�veis
 x=foo(a,b) //define x ocmo o retorno de foo() entrando com os par�metros
 
 */

/*

 Prot�tipos de fun��es s�o declarados para se alocar mem�ria
 e informar ao compilador quais dados � se esperar. Devem estar sempre no
 in�cio do programa.

 N�o � importante colocar os nomes das vari�veis de entrada, exemplo:
 int maximo (int x, int y) fica mais elegante assim:
 int maximo (int, int);

 Caso se opte por n�o utilizar os prot�tipos de fun��o, a fun��o deve ser
 declarada e definida ANTES de ser utilizada na fun��o main.

 */

unsigned char a,b,c;		// Declara��o de 3 vari�veis

void soma(void);		// Prot�tipo de fun��o soma

void main()
{
	a = 3;				// Atribui 3 � vari�vel a
	b = 5;				// Atribui 5 � vari�vel b

	soma();				// Chamada da fun��o soma
	while(1);			// Loop infinito
}

void soma(void)				// Defini��o da fun��o soma
{
        c = a + b;			// Executa a soma de a com b e o resultado vai para c
}