#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i;
    scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    
    printf((a+b+d)%2==0 ? "1":"0"); printf((a+b+c+e)%2==0 ? "1":"0"); printf((b+c+f)%2==0 ? "1":"0");
    printf((g+a+d+e)%2==0 ? "\n1":"\n0"); printf((b+d+e+f+h)%2==0 ? "1":"0"); printf((i+f+c+e)%2==0 ? "1":"0");
    printf((g+d+h)%2==0 ? "\n1":"\n0"); printf((g+h+i+e)%2==0 ? "1":"0"); printf((i+h+f)%2==0 ? "1":"0");
    
    return 0;
}
