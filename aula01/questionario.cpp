#include <stdio.h>

int main()
{
	int idade;
	float altura;
	char resposta;

	printf("qual sua idade??\n");
	scanf(" %d", &idade);	

	printf("qual sua altura (em metros)??\n");
	scanf(" %f", &altura);
	
	printf("voce é legal??\n");
	scanf(" %c", &resposta);	

	printf("idade: %d altura: %.2f é legal: %c\n", idade, altura, resposta);

	return 0;
}
