#include <stdio.h>

int main() {
  int l1, a1, l2, a2;
  scanf("%d", &l1);
  scanf("%d", &a1);
  scanf("%d", &l2);
  scanf("%d", &a2);

  if (l1 * a1 == l2 * a2){
    printf("Empate\n");
  } else if (l1 * a1 > l2 * a2){
    printf("Primeiro\n");
  } else {
    printf("Segundo\n");
  }
  
  return 0;
}
