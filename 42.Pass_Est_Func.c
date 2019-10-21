/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Estudo da passagem de Estruturas
 *para fun��es.

*/

/*
 Exemplo:

typedef struct
{
    float re;
    float im;

} Ncomplexo;

void display(Ncomplexo x)
{
    printf("(%f+j%f)\n", x.re, x.im);
}

int main (void)
{
    Ncomplexo a={1.2, 2.5};
    Ncomplexo b={3.7, 4.0};

    display(a);
    display(b);
}

*/

unsigned char Res;		// Declara vari�vel de 8 bits

typedef struct			// Cria outro tipo
{
	unsigned char A;	// Declara dois membros para esta estrutura
	unsigned char B;
}Tipo;

unsigned char Soma(Tipo);	// Prot�tipo de fun��o

void main()
{
	Tipo Var1 = {5,7};	// Declara e inicializa uma vari�vel Var do tipo "Tipo"
	Res = Soma(Var1);	// Chama a fun��o Soma com argumento do tipo "Tipo"
	while(1);
}

unsigned char Soma(Tipo MinhaVar)	// Prot�tipo de fun��o
{
	unsigned char x;		// Vari�vel local
	
	x = MinhaVar.A + MinhaVar.B;
	return x;
}
