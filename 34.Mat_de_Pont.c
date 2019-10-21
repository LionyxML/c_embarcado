/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de matrizes de ponteiros.

 */

/*
 Uma matriz de ponteiros é uma matriz composta somente por
 variáveis ponteiros. Então cada elemento é chamado de elemento ponteiro.

 Declaração:
 char *p[4];    //repare o asteristo antes do p, toda a matriz é ponteiro
 
 Inicialização:
 p[0] = &x;     //p[0] assume o valor do endereço de x

 Para utilizar o conteúdo:
 y=*p[0]        //y assume o valor do conteúdo do endereço apontado

 Exemplo:
 int i=0;
 char *str[]= {"Zero", "Um", "Dois", "Três", "Quatro", "\0"};

 //Importante! cada elemento ponteiro aponta para o endereço do primeiro
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
unsigned char A = 5,B;		// Declara uma variável A e B

void main()
{
	pM1[0] = &A;        // Salva o endereço de A no primeiro elemento ponteiro de pM1
	pM1[1] = M1;        // Salva o end. do 1º elemento de M1 no segundo elemento da matriz ponteiro
	pM1[2] = &M1[0];    // Salva o end. do 1º elemento de M1 no terceiro elemento da matriz ponteiro
	B = *pM1[0];
	B = **&pM1[0];      // O * cancela o &, o que faz com que seja rodado um código B = *pM1[0];

	while(1);
}