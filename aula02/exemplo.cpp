#include <stdio.h>

int main(){
	int N = 1e6 + 10;	
	int v[N];
	int n;
	scanf("%d",&n);
	int vezes;
	for(int i = 1; i < n; i++){
		scanf("%d",&vezes);
		v[i] = vezes;
		for(int j = 1; j <= vezes; j++){
			printf("#");
		}		
		printf("\n");
	}
	for(int i = 1; i < n; i++){
		printf("%d", v[i]);
	}
	printf("\n");	
return 0;
}
