#include <stdio.h>

int main(){
  int n,k,l,c,d,p,nl,np;
  scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
  
  int t1 = k*l/nl;
  int t2 = c*d;
  int t3 = p/np;

  if(t1<=t2 && t1<=t3){
    printf("\n%d",t1/n);
  } else if(t2<=t1 && t2<=t3){
    printf("\n%d",t2/n);
  } else if(t3<=t1 && t3<=t2){
    printf("\n%d",t3/n);
  }
  return 0;
}