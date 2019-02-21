#include <stdio.h>

int main(){
  int w;
  scanf("%d", &w);

  if (w % 2 == 0 and w != 2){
    printf("\nYes");
  } else {
    printf("\nNo");
  }
  return 0;
}