/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de aritim�tica de ponteiros.

 */


/*
 Exemplo:
 float *ptr;  //como o ponteiro � float, cada dado de matriz ter� 4 bytes
 ptr=&a;      //se a[0] estiver no endere�o 0x054, ent�o...
 ptr++;       //atribuir� � ptr o valor 0x058, pois a[1] estar� nesse endere�o
 
 Essa adapta��o de incremento pelo tipo de dado (+4 para float, +2 p/ int, etc...)
 � feita pelo compilador.

 Exemplo:
 int x;
 int *p = &x;
 p += 3;
 Teremos p=&x+6, porque int ocupa 2 bytes na mem�ria 2x3=6.
 O compilador � quem cuida dessa opera��o.

 Regras de p�s Incremento / Decremento
 *p++ ou *(p++)     z=*(p++)   equivale � z=*p;  p=p+1;   //p�s incremento do ponteiro
 (*p)++             z=(*p)++   equivale � z=*p;  *p=*p+1; //p�s incremento dos DADOS apontados

 
 Regras de Pr�-Incremento/Decremento
 ++*p ou *(++p)     z=*(++p)   equivale � p=p+1; z=*p;    //pr� incremento do ponteiro
 ++(*p)             z=++(*p)   equivale � *p=*p+1; z=*p;  //pr� incremento dos DADOS apontados


 Dica de inicializa��o
 Uma boa pr�tica � sempre inicializar um ponteiro com NUL.
 Isso evita escrever acidentalmente em uma posi��o qualquer da
 mem�ria caso usado antes de ser inicializado.
 Exemplo:
 int *p=NUL;  //NUL e '\0' s�o a mesma coisa.

 */


unsigned char a,b,c;				// Declara a, b, c de 8 bits
unsigned char *pa,*pb,*pc;			// Declara ponteiros para a,b,c

unsigned int A;					// Declara A de 16 bits
unsigned int *pA;				// Declara ponteiro para A

void main()
{
	a = 10;					// Atribui 10 � a
	b = 8;					// Atribui 8 � b
	c = 13;					// Atribui 13 � c

// Incrementando o endere�o apontado

	pa = &a;		// pa aponta p/ a
	pa++;			// Faz pa apontar para o proximo endere�o

	pA = &A;		// pA aponta p/ A
	pA++;			// Faz pA apontar para o proximo endere�o

	pb = pa + 1;		// O end. que pb aponta � o proximo do end. que pa aponta
	pA += 2;		// O end. final ser� 4 bytes acima

// Somando os conte�dos de a e de b pelo ponteiro

	pa = &a;		// pa aponta p/ a
	pb = &b;		// pb aponta p/ b
	pc = &c;		// pc aponta p/ c

	*pc = *pa + *pb;	// Soma a com b indiretamente - Pode usar qualquer operador estudado !!
		
	c = *pa++;		// * tem precedencia maior que ++, ent�o 1� c = *pa, 2� pa++
	
	while(1);
}