/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da preced�ncia de operadores.

 */

/*
 Preced�ncia de Operadores (associatividade)

 S�o executados da Esquerda para a Direita:
 ( ), [ ], . , ->
 *, /, %, +, -, >>, <<, <, <=, >, >=, ==, !=,
 &, ^, |, &&,
 =, +=, -=, /=, *=, %=, <<=, >>=, &=, |=,
 ^=,

 S�o executados da Direita para a Esquerda:
 +, -, ++, --, !, ~, *, &, sizeof, (type)
 ?, :, , (operador v�rugula)

 Operadores agrupados na mesma linha tem a mesma preced�ncia.
 Nesses casos, a preced�ncia � feita de acordo com a associatividade.

 Express�o              Execu��o (em () ocorre primeiro)
 a-b*c                  a - (b*c)
 a + ++b                a + (++b)
 a + ++b *c             a + ((++b) * c)

 Para fun��es n�o h� regra ex:
 x=f()+e();
 N�o h� como saber se f() ou g() ser� executado primeiro.

 Se dois operadores tem a mesma preced�ncia, sua
 associatividade determina a ordem � ser executado:
 Express�o          Associatividade    Execu��o (em () ocorre primeiro)
 x / y % z          Esquerda-Direita   (x/y)%z
 x=y=z              Direita-Esquerda   x=(y=z)
 ~++x              Direita-Esquerda   ~(++x)

 Essas regras ajudam, mas � mais pr�tico em programa��o
 utilizar ( ) para determinar a ordem desejada.
 */

unsigned char x = 10, a, b, c, d;
unsigned float y;

void main()
{
	y = x / 4;              // Divide x por 4. Resultado truncado

	y = (float)x / 4;       // Divide x por 4 convertendo x para float temporariamente

	a = 2;			// Atribui 2 � a 
	b = 4;			// Atribui 4 � b
	c = 3;                  // Atribui 3 � c

	d = c - a + b;		// Primeiro: Subtrai c de a -> c - a = 1 - Da esquerda para a direita
				// Segundo: Soma o resultado com b -> 1 + b = 5
				// Treceiro: Atribui 5 � d -> d = 5

	d = b * c / a;		// Primeiro: multiplica b com c - Da esquerda para a direita
				// Segundo: divide o resultado por a
				// Terceiro: Atribui � d 

	d = b * (c / a);	// Primeiro: divide c com a - O () tem maior preced�ncia
				// Segundo: multiplica o resultado por b
				// Terceiro: Atribui � d 

	d = a + b * c;		// Primeiro: Multiplica b com c - Multiplica��o tem preced�ncia maior que adi��o
				// Segundo: Soma o resultado � a
				// Terceiro: Atribui � d

	d = a || b + c;		// Primeiro: Adiciona b com c
				// Segundo: Faz l�gica OU do resultado com a
				// Treceiro: Atribui o resultado � d

	d = (a || b) + c;	// Primeiro: Faz OU entre a e b
				// Segundo: Adiciona resultado com c
				// Treceiro: Atribui o resultado � d

	d = ++a;		// Primeiro: Incrementa a
				// Segundo: Atribui o resultado a d

	d = b++;		// Primeiro: Atribui � d
				// Segundo: Incrementa b

	while(1);
}