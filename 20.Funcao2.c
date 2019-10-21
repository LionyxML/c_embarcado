/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de funções.

 */



/*

 Uma função pode receber valores (argumentos), podem ser passados
 para a função de 2 maneiras:

 1 - Passagem por valor 
 2 - Passagem por referência

 Passagem por valor, onde as variáveis originais não são utilizadas, mas
 copiadas para dentro da função.
 Exemplo:
 int soma(int x, int y)
 {
 x=x+y;
 return x;
 }

 void main()
 {
 a=5;
 b=6;
 c=soma(a,b);

 */

/*
 Existe um recurso chamado Recursividade
 Muito útil em casos de iteração computacional, um exemplo é o cálculo de um
 fatorial.

 long int fatorial(int, n)
 {
 if(n<=1)
 return(1);

 else
 return(n*fatorial(n-1));
 }
 
 */

/*
 Os parâmetros da função podem ter os mesmos nomes das variáveis externas. E
 variáveis locais na função não existem fora dela.
 Ex:
 int n;
 long int fatorial(int n) {...}

 ESSES NÃO SÃO OS MESMOS n

 */

/*

 Também poderá existir um #define local
 

 */

unsigned char a,b,c;				// Declaração de 3 variáveis

unsigned char soma(void);			// Protótipo de função soma

void main()
{
	a = 3;							// Atribui 3 à variável a
	b = 5;							// Atribui 5 à variável b

	c = soma();						// Chamada da função soma
	while(1);						// Loop infinito
}

unsigned char soma(void)			// Definição da função soma
{
	return(a + b);					// Executa a soma de a com b e o resultado vai para c
}
