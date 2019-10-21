/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo de Estruturas Aninhadas.

*/

/*
 Especialmente úteis para se desenhar linhas em display gráfico.
 Exemplo:
 typedef struct
 {
 float x;
 float y;
 } ponto;

 typedef struct
 {
 ponto a;
 ponto b;
 } linha;

 int main(void)
 {
 linha m;
 m.a.x=1.2;     //ponto a (1.2,7.6) ponto b (38.5,17.8)
 m.a.y=7.6;
 m.b.x=38.5;
 m.b.y=17.8;
 ...
 


 */



// Estruturas aninhadas
unsigned char DeltaX, DeltaY;

typedef struct			// Cria um tipo novo "ponto"
{
	unsigned char x,y;	// Declara dois membros x e y do tipo char
}ponto;

typedef struct			// Cria um tipo novo "linha"
{
	ponto a,b;		// Declara dois membros x e y do tipo ponto
}linha;

void main()
{
	linha L;		// Declara a linha L
	L.a.x = 10;		// Atribui 10 à coordenada x do ponto a da limha L
	L.a.y = 5;		// Atribui 5 à coordenada y do ponto a da limha L

	L.b.x = 130;		// Atribui 130 à coordenada x do ponto a da limha L
	L.b.y = 34;		// Atribui 34 à coordenada y do ponto a da limha L

	DeltaX = L.b.x - L.a.x;		// Calcula a distancia entre x
	DeltaY = L.b.y - L.a.y;		// Calcula a distancia entre y

	while(1);
}