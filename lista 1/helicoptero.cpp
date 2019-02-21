#include <stdio.h>

int main(){
  int h,p,f,d;
  scanf("%d%d%d%d",&h,&p,&f,&d);
  
  if(d==-1 && p>f && f>h){
    printf("\nS");
  } else if(d==1 && p>f && f>h){
    printf("\nN");
  } else if(d==-1 && p>h && h>f){
    printf("\nN");
  } else if(d==1 && p>h && h>f){
    printf("\nS");
  } else if(d==-1 && h>p && p>f){
    printf("\nS");
  } else if(d==1 && h>p && p>f){
    printf("\nN");
  } else if(d==-1 && h>f && f>p){
    printf("\nN");
  } else if(d==1 && h>f && f>p){
    printf("\nS");
  } else if(d==-1 && f>h && h>p){
    printf("\nS");
  } else if(d==1 && f>h && h>p){
    printf("\nN");
  } else if(d==-1 && f>p && p>h){
    printf("\nN");
  } else if(d==1 && f>p && p>h){
    printf("\nS");
  }
  return 0;
}