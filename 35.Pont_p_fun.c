/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros para função.

*/

/*

 * Ponteiros podem ser usados para apontar endereços DE FUNCOES.
 * Fornece uma maneira mais flexível de se chamar uma função, pois permite
 *uma escolha de qual função chamar;
 * Com ponteiros é possível passar funções para funções como se fossem
 *parâmetros;
 * Não é muito comum, mas útil em situações específicas.

 Declaração:
 float (*fp) (int);

 Inicialização:
 int (*pfoo)(int x);    //Ponteiro para a função
 int foo(int x);        //Protótipo de função

 Pode-se inibializar o ponteiro para função dessa forma:
 pfoo=foo;              //pfoo aponta para a função foo



 Chamada de uma função via ponteiro
 y = pfoo(x);           //Padrão ANSI semelhante à chamada de função direta
 y = (*pfoo) (x);

 É o mesmo que chamar a função diretamente:
 y=foo(x);





 Exemplo1: Passando Função para Função

 int x;
 int foo(int a, intb);  //Protótipo de função

 int foobar(int a, int b, int(*fp)(int, int))
 {
        return fp(a,b);
 }

 void main(void)
 {
     x= foobar(5,12,&foo); //passa o endereço de foo para foobar
 }

 int foo(int a, int b)
 {
    return(a+b);
 }



 Exemplo 2:
 float integral(float a, flat b, float(*f)(float))
 {
 float sum=0.0;
 float x;
 int n;

 //Cálculo da Integral {a,b} f(x)dx
 for (n=0; n<=100, n++)
 {
        x=((n/100.0)*(b-a))+a;
        sum+=(f(x) * (b-a))/101.0;
 }
        return sum;
 }

 

 */

unsigned char funcao(unsigned char);	// Protótipo de uma função

unsigned char (*pf) (unsigned char);	// Ponteiro para uma função void que recebe um char positivo                            
unsigned char A;

int main()
{
    pf = funcao;		// Faz o ponteiro apontar para a funcao
    A = pf(5);                  // Chamando a função via ponteiro - ANSI
    A = (*pf)(4);               // Chamando a função via ponteiro
    A = funcao(10);		// Chamada convencional

	while(1);  
}

unsigned char funcao(unsigned char X)   // Definição de uma função
{
    return(X+1);         
}
