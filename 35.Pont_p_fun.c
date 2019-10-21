/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros para fun��o.

*/

/*

 * Ponteiros podem ser usados para apontar endere�os DE FUNCOES.
 * Fornece uma maneira mais flex�vel de se chamar uma fun��o, pois permite
 *uma escolha de qual fun��o chamar;
 * Com ponteiros � poss�vel passar fun��es para fun��es como se fossem
 *par�metros;
 * N�o � muito comum, mas �til em situa��es espec�ficas.

 Declara��o:
 float (*fp) (int);

 Inicializa��o:
 int (*pfoo)(int x);    //Ponteiro para a fun��o
 int foo(int x);        //Prot�tipo de fun��o

 Pode-se inibializar o ponteiro para fun��o dessa forma:
 pfoo=foo;              //pfoo aponta para a fun��o foo



 Chamada de uma fun��o via ponteiro
 y = pfoo(x);           //Padr�o ANSI semelhante � chamada de fun��o direta
 y = (*pfoo) (x);

 � o mesmo que chamar a fun��o diretamente:
 y=foo(x);





 Exemplo1: Passando Fun��o para Fun��o

 int x;
 int foo(int a, intb);  //Prot�tipo de fun��o

 int foobar(int a, int b, int(*fp)(int, int))
 {
        return fp(a,b);
 }

 void main(void)
 {
     x= foobar(5,12,&foo); //passa o endere�o de foo para foobar
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

 //C�lculo da Integral {a,b} f(x)dx
 for (n=0; n<=100, n++)
 {
        x=((n/100.0)*(b-a))+a;
        sum+=(f(x) * (b-a))/101.0;
 }
        return sum;
 }

 

 */

unsigned char funcao(unsigned char);	// Prot�tipo de uma fun��o

unsigned char (*pf) (unsigned char);	// Ponteiro para uma fun��o void que recebe um char positivo                            
unsigned char A;

int main()
{
    pf = funcao;		// Faz o ponteiro apontar para a funcao
    A = pf(5);                  // Chamando a fun��o via ponteiro - ANSI
    A = (*pf)(4);               // Chamando a fun��o via ponteiro
    A = funcao(10);		// Chamada convencional

	while(1);  
}

unsigned char funcao(unsigned char X)   // Defini��o de uma fun��o
{
    return(X+1);         
}
