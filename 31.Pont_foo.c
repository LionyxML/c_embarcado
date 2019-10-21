/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros para fun��es.

 */


/*
 Lembrando que fun��es operam com c�pias de vari�veis passadas
 para elas (passagem por valor)
 Exemplo:
 int x=2, y=0;

 int square(int n)
 {
    return (n*n);
 }

 int main(void)
 {
    y=square(x);
 }

 Outra forma �til e elegante � passar os valores para fun��o
 por refer�ncia. Aqui n�o se passa o valor de uma vari�vel, mas o
 endere�o de uma vari�vel, assim a fun��o n�o cria c�pias e pode
 manipular a vari�vel do endere�o. (Acesso indireto)
 Exemplo:

 int x=2, y=0;
 void square(int *n)    //agora declaramos um ponteiro, o conte�do n�o � passado
                        //apenas o endere�o onde ela se encontra
 {
    *n *= *n;
 }

 int main(void)
 {
    square(&x);
 }


 Par�metros por refer�ncia. Exemplo1:

 void swap(int *n1, int *n2) //Troca o conte�do n1->n2 e n2->n1
 {
 int temp;

 temp = *n1;  //conte�do do endere�o apontado por n1 e guarda em temp
 *n1 = *n2;   //copio o conte�do do end. apont. por n1 e coloco no end. apon. em n2
 *n2 = temp;  //agora atribui ao end. apont. por n2 o valor de temp (antigo n1)

 }

 int main(void)
 int x=5, y=10;
 int *p=&y;

 swap(&x, p);

 while(1);

 */
unsigned char A, B;
unsigned char Incrementa(unsigned char *);	// Prot�tipo de fun��o

void main()
{
	A = 10;				// Atribui 10 � vari�vel A
	B = Incrementa(&A);		// O ponteiro pA recebe o endere�o de A
	while(1);
}

unsigned char Incrementa(unsigned char *pA)	// Defini��o da fun��o Incrementa
{
	return(++(*pA));	// Incrementa o conte�do do endere�o apontado
                                // e depois retorna
}