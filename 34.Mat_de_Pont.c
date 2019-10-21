/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de matrizes de ponteiros.

 */

/*
 Uma matriz de ponteiros � uma matriz composta somente por
 vari�veis ponteiros. Ent�o cada elemento � chamado de elemento ponteiro.

 Declara��o:
 char *p[4];    //repare o asteristo antes do p, toda a matriz � ponteiro
 
 Inicializa��o:
 p[0] = &x;     //p[0] assume o valor do endere�o de x

 Para utilizar o conte�do:
 y=*p[0]        //y assume o valor do conte�do do endere�o apontado

 Exemplo:
 int i=0;
 char *str[]= {"Zero", "Um", "Dois", "Tr�s", "Quatro", "\0"};

 //Importante! cada elemento ponteiro aponta para o endere�o do primeiro
 //caracter de cada string

 int main (void)
 {
    while(*str[i] != '\0')
    printf("%s\n", str[i++]);
 
    while (1);
 }

 
 */

unsigned char M1[] = "PIC";	// Declara uma matriz M1
unsigned char *pM1[4];          // Declara uma matriz de ponteiros p/ um tipo char
unsigned char A = 5,B;		// Declara uma vari�vel A e B

void main()
{
	pM1[0] = &A;        // Salva o endere�o de A no primeiro elemento ponteiro de pM1
	pM1[1] = M1;        // Salva o end. do 1� elemento de M1 no segundo elemento da matriz ponteiro
	pM1[2] = &M1[0];    // Salva o end. do 1� elemento de M1 no terceiro elemento da matriz ponteiro
	B = *pM1[0];
	B = **&pM1[0];      // O * cancela o &, o que faz com que seja rodado um c�digo B = *pM1[0];

	while(1);
}