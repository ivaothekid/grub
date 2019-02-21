#include <stdio.h>

int main() 
{
	int w1, h1;
	scanf("%d\n", &w1);
	scanf("%d\n", &h1);
	
	int l2, h2;
	scanf("%d\n", &l2);
	scanf("%d\n", &h2);

	if (w1 * h1 > l2 * h2)
		printf("Primeiro\n");	
	else
		printf("Segundo\n");
	return 0;
}
