/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de ponteiros para funções.

 */


/*
 Lembrando que funções operam com cópias de variáveis passadas
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

 Outra forma útil e elegante á passar os valores para função
 por referência. Aqui não se passa o valor de uma variável, mas o
 endereço de uma variável, assim a função não cria cópias e pode
 manipular a variável do endereço. (Acesso indireto)
 Exemplo:

 int x=2, y=0;
 void square(int *n)    //agora declaramos um ponteiro, o conteúdo não é passado
                        //apenas o endereço onde ela se encontra
 {
    *n *= *n;
 }

 int main(void)
 {
    square(&x);
 }


 Parâmetros por referência. Exemplo1:

 void swap(int *n1, int *n2) //Troca o conteúdo n1->n2 e n2->n1
 {
 int temp;

 temp = *n1;  //conteúdo do endereço apontado por n1 e guarda em temp
 *n1 = *n2;   //copio o conteúdo do end. apont. por n1 e coloco no end. apon. em n2
 *n2 = temp;  //agora atribui ao end. apont. por n2 o valor de temp (antigo n1)

 }

 int main(void)
 int x=5, y=10;
 int *p=&y;

 swap(&x, p);

 while(1);

 */
unsigned char A, B;
unsigned char Incrementa(unsigned char *);	// Protótipo de função

void main()
{
	A = 10;				// Atribui 10 à variável A
	B = Incrementa(&A);		// O ponteiro pA recebe o endereço de A
	while(1);
}

unsigned char Incrementa(unsigned char *pA)	// Definição da função Incrementa
{
	return(++(*pA));	// Incrementa o conteúdo do endereço apontado
                                // e depois retorna
}