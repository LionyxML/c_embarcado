/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: estudo da precedência de operadores.

 */

/*
 Precedência de Operadores (associatividade)

 São executados da Esquerda para a Direita:
 ( ), [ ], . , ->
 *, /, %, +, -, >>, <<, <, <=, >, >=, ==, !=,
 &, ^, |, &&,
 =, +=, -=, /=, *=, %=, <<=, >>=, &=, |=,
 ^=,

 São executados da Direita para a Esquerda:
 +, -, ++, --, !, ~, *, &, sizeof, (type)
 ?, :, , (operador vírugula)

 Operadores agrupados na mesma linha tem a mesma precedência.
 Nesses casos, a precedência é feita de acordo com a associatividade.

 Expressão              Execução (em () ocorre primeiro)
 a-b*c                  a - (b*c)
 a + ++b                a + (++b)
 a + ++b *c             a + ((++b) * c)

 Para funções não há regra ex:
 x=f()+e();
 Não há como saber se f() ou g() será executado primeiro.

 Se dois operadores tem a mesma precedência, sua
 associatividade determina a ordem à ser executado:
 Expressão          Associatividade    Execução (em () ocorre primeiro)
 x / y % z          Esquerda-Direita   (x/y)%z
 x=y=z              Direita-Esquerda   x=(y=z)
 ~++x              Direita-Esquerda   ~(++x)

 Essas regras ajudam, mas é mais prático em programação
 utilizar ( ) para determinar a ordem desejada.
 */

unsigned char x = 10, a, b, c, d;
unsigned float y;

void main()
{
	y = x / 4;              // Divide x por 4. Resultado truncado

	y = (float)x / 4;       // Divide x por 4 convertendo x para float temporariamente

	a = 2;			// Atribui 2 à a 
	b = 4;			// Atribui 4 à b
	c = 3;                  // Atribui 3 à c

	d = c - a + b;		// Primeiro: Subtrai c de a -> c - a = 1 - Da esquerda para a direita
				// Segundo: Soma o resultado com b -> 1 + b = 5
				// Treceiro: Atribui 5 à d -> d = 5

	d = b * c / a;		// Primeiro: multiplica b com c - Da esquerda para a direita
				// Segundo: divide o resultado por a
				// Terceiro: Atribui à d 

	d = b * (c / a);	// Primeiro: divide c com a - O () tem maior precedência
				// Segundo: multiplica o resultado por b
				// Terceiro: Atribui à d 

	d = a + b * c;		// Primeiro: Multiplica b com c - Multiplicação tem precedência maior que adição
				// Segundo: Soma o resultado à a
				// Terceiro: Atribui à d

	d = a || b + c;		// Primeiro: Adiciona b com c
				// Segundo: Faz lógica OU do resultado com a
				// Treceiro: Atribui o resultado à d

	d = (a || b) + c;	// Primeiro: Faz OU entre a e b
				// Segundo: Adiciona resultado com c
				// Treceiro: Atribui o resultado à d

	d = ++a;		// Primeiro: Incrementa a
				// Segundo: Atribui o resultado a d

	d = b++;		// Primeiro: Atribui à d
				// Segundo: Incrementa b

	while(1);
}