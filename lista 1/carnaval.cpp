#include <stdio.h>

int main(){
  float a,b,c,d,e;
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  float soma=a+b+c+d+e;

  if(a<=b && a<=c && a<=d && a<=e){
    if(e>=a && e>=b && e>=c && e>=d){
      printf("\n%.1f",soma-a-e);
    }else if(d>=a && d>=b && d>=c && d>=e){
      printf("\n%.1f",soma-a-d);
    }else if(c>=a && c>=b && c>=d && c>=e){
      printf("\n%.1f",soma-a-c);
    }else if(b>=a && b>=c && b>=d && b>=e){
      printf("\n%.1f",soma-a-b);
    }
  }

  else if(b<=a && b<=c && b<=d && b<=e){
    if(e>=a && e>=b && e>=c && e>=d){
      printf("\n%.1f",soma-b-e); 
    }else if(d>=a && d>=b && d>=c && d>=e){
      printf("\n%.1f",soma-b-d); 
    }else if(c>=a && c>=b && c>=d && c>=e){
      printf("\n%.1f",soma-b-c);
    }else if(a>=b && a>=c && a>=d && a>=e){
      printf("\n%.1f",soma-b-a);
    }
  }

  else if(c<=a && c<=b && c<=d && c<=e){
    if(e>=a && e>=b && e>=c && e>=d){
      printf("\n%.1f",soma-c-e);
    }else if(d>=a && d>=b && d>=c && d>=e){
      printf("\n%.1f",soma-c-d);
    }else if(a>=b && a>=c && a>=d && a>=e){
      printf("\n%.1f",soma-c-a);
    }else if(b>=a && b>=c && b>=d && b>=e){
      printf("\n%.1f",soma-c-b);
    }
  }

  else if(d<=a && d<=b && d<=c && d<=e){
    if(e>=a && e>=b && e>=c && e>=d){
      printf("\n%.1f",soma-d-e);
    }else if(c>=a && c>=b && c>=d && c>=e){
      printf("\n%.1f",soma-d-c);
    }else if(b>=a && b>=c && b>=d && b>=e){
      printf("\n%.1f",soma-d-b);
    }else if(a>=b && a>=c && a>=d && a>=e){
      printf("\n%.1f",soma-d-a);
    }
  }

  else if(e<=a && e<=b && e<=c && e<=d){
    if(d>=a && d>=b && d>=c && d>=e){
      printf("\n%.1f",soma-e-d);
    }else if(c>=a && c>=b && c>=d && c>=e){
      printf("\n%.1f",soma-e-c);
    }else if(b>=a && b>=c && b>=d && b>=e){
      printf("\n%.1f",soma-e-b);
    }else if(a>=b && a>=c && a>=d && a>=e){
      printf("\n%.1f",soma-e-a);
    }
  }

  return 0;
}