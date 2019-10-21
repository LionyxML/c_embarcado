/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de funções.

 */

/*
 Funções são segmentos de código de programa alocados
 em um endereço específico da memória de programa com o
 objetivo de executar uma tarefa bem definida.

 Todos os programas em C tem uma ou mais funções;
 Sempre deve existir a função main();
 Funções podem aceitar parâmetros como entrada de dados;
 Funções normalmente retornam apenas um valor;
 Funções ajudam a estruturar o programa de maneira logica e
 organizada.
 
 */

/*
 Sintaxe:
 tipo identificador(tipo1, arg1, tipo2, arg2,...) (parâmetros são opcionais)
 {
 declarações;
 expressões;
 return expressão; (opcional)
 }

 IMPORTANTE, o tipo deve ser do mesmo tipo do retorno!!!

 A função será do tipo void se a instrução return não tiver uma expressão ou
 Não existie a função return.


 Para se chamar uma função, deve-se entrar com seu nome.
 Sintaxes (exemplo para a função foo():
 foo();    //chama foo sem pegar retorno ou entrar com parâmetros
 x=foo();  //define x como o retorno de foo() sem entrar com parâmetros
 foo(a,b); //chama foo sem gravar retorno entrando com variáveis
 x=foo(a,b) //define x ocmo o retorno de foo() entrando com os parâmetros
 
 */

/*

 Protótipos de funções são declarados para se alocar memória
 e informar ao compilador quais dados à se esperar. Devem estar sempre no
 início do programa.

 Não é importante colocar os nomes das variáveis de entrada, exemplo:
 int maximo (int x, int y) fica mais elegante assim:
 int maximo (int, int);

 Caso se opte por não utilizar os protótipos de função, a função deve ser
 declarada e definida ANTES de ser utilizada na função main.

 */

unsigned char a,b,c;		// Declaração de 3 variáveis

void soma(void);		// Protótipo de função soma

void main()
{
	a = 3;				// Atribui 3 à variável a
	b = 5;				// Atribui 5 à variável b

	soma();				// Chamada da função soma
	while(1);			// Loop infinito
}

void soma(void)				// Definição da função soma
{
        c = a + b;			// Executa a soma de a com b e o resultado vai para c
}