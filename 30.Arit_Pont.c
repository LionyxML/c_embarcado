/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de aritimética de ponteiros.

 */


/*
 Exemplo:
 float *ptr;  //como o ponteiro é float, cada dado de matriz terá 4 bytes
 ptr=&a;      //se a[0] estiver no endereço 0x054, então...
 ptr++;       //atribuirá à ptr o valor 0x058, pois a[1] estará nesse endereço
 
 Essa adaptação de incremento pelo tipo de dado (+4 para float, +2 p/ int, etc...)
 é feita pelo compilador.

 Exemplo:
 int x;
 int *p = &x;
 p += 3;
 Teremos p=&x+6, porque int ocupa 2 bytes na memória 2x3=6.
 O compilador é quem cuida dessa operação.

 Regras de pós Incremento / Decremento
 *p++ ou *(p++)     z=*(p++)   equivale à z=*p;  p=p+1;   //pós incremento do ponteiro
 (*p)++             z=(*p)++   equivale à z=*p;  *p=*p+1; //pós incremento dos DADOS apontados

 
 Regras de Pré-Incremento/Decremento
 ++*p ou *(++p)     z=*(++p)   equivale à p=p+1; z=*p;    //pré incremento do ponteiro
 ++(*p)             z=++(*p)   equivale à *p=*p+1; z=*p;  //pré incremento dos DADOS apontados


 Dica de inicialização
 Uma boa prática é sempre inicializar um ponteiro com NUL.
 Isso evita escrever acidentalmente em uma posição qualquer da
 memória caso usado antes de ser inicializado.
 Exemplo:
 int *p=NUL;  //NUL e '\0' são a mesma coisa.

 */


unsigned char a,b,c;				// Declara a, b, c de 8 bits
unsigned char *pa,*pb,*pc;			// Declara ponteiros para a,b,c

unsigned int A;					// Declara A de 16 bits
unsigned int *pA;				// Declara ponteiro para A

void main()
{
	a = 10;					// Atribui 10 à a
	b = 8;					// Atribui 8 à b
	c = 13;					// Atribui 13 à c

// Incrementando o endereço apontado

	pa = &a;		// pa aponta p/ a
	pa++;			// Faz pa apontar para o proximo endereço

	pA = &A;		// pA aponta p/ A
	pA++;			// Faz pA apontar para o proximo endereço

	pb = pa + 1;		// O end. que pb aponta é o proximo do end. que pa aponta
	pA += 2;		// O end. final será 4 bytes acima

// Somando os conteúdos de a e de b pelo ponteiro

	pa = &a;		// pa aponta p/ a
	pb = &b;		// pb aponta p/ b
	pc = &c;		// pc aponta p/ c

	*pc = *pa + *pb;	// Soma a com b indiretamente - Pode usar qualquer operador estudado !!
		
	c = *pa++;		// * tem precedencia maior que ++, então 1º c = *pa, 2º pa++
	
	while(1);
}