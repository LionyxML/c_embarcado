/*
=============================================================
Exemplos de Programas em Linguagem C para Sistemas Embarcados

Eng. Rahul Martim Juliato

Compilador: C18 em Ambiente MPLAB X
=============================================================


Objetivo do programa: Ponteiros para Estruturas

*/

/*
 Como declarar um ponteiro para uma estrutura.
 Se NomeDoTipo ou NomeDaEstrutura já foi definido:
 Sintaxe:
 NomeDoTipo *ptrNome;
 ou
 struct NomeDaEstrutura *ptrNome;

 Exemplo1: Nome do Tipo
 typedef struct
 {
     float re;
     float im;
 } complex;
 ...
 complex *p;

 Exemplo2: Nome da Estrutura
 struct complex
 {
     float re;
     float im;
  }
 ...
 struct complex *p;


 Acessando os membros de uma estrutura por Ponteiro:
 Se ptrNome já está definido:
 Sintaxe: ptrNome->NomeDoMembro
 Ponteiro deve ser primeiro inicializado para apontar o endereço da estrutura.

 Exemplo:
 typedef struct
 {
     floa re;
     float im;
 } Ncomplexo;   //Tipo
 ...
 Ncomplexo x;   //Variável
 Ncomplexo *p;  //Ponteiro

 int main(void)
 {
 p=&x;          //passa o endereço da variável para um ponteiro
 p->re = 1.25   //Faz x.re=1.25 via p
 p->im = 2.50   //Faz x.im=2.50 via p
 }

 */

typedef struct                      // Cria um tipo Cadastro
{
	unsigned char Nome[10];     // Para salvar nome
        unsigned char Idade;        // E salvar idade
}Cadastro;                          // Tipo Cadastro

Cadastro *pPessoa;                      // Declara ponteiro pessoa do tipo cadastro
Cadastro Diretor, Gerente, Funcionario;	// Declara variáveis do tipo cadastro

void main()
{
	pPessoa = &Diretor;
	pPessoa->Nome[0] = 'R';
	pPessoa->Nome[1] = 'a';
	pPessoa->Nome[2] = 'h';
	pPessoa->Nome[3] = 'u';
	pPessoa->Nome[4] = 'l';
	pPessoa->Nome[5] = '\0';
	pPessoa->Idade = 25;

	pPessoa++;

	while(1);
}