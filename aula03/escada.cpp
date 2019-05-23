#include <stdio.h>

	int main(){
		int n,t,a=0,lt=0;
		scanf(" %d",&n);
		
		for(int i=0;i<n;i++){
			scanf(" %d",&t);
			
			if(t>=lt){
				a = a + 10;
			} else {
				a = a + t + 10 - lt; 
			}
		lt = t + 10;
	}
	printf("%d\n",a);

	return 0;
}
