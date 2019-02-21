#include <stdio.h>

int main(){
  int p,r;

  scanf("%d%d",&p,&r);

  if(p==1 && r==0){
    printf("\nB");
  }

  else if(p==1 && r==1){
    printf("\nA");
  }
  
  else {
    printf("\nC");
  }

  return 0;
}