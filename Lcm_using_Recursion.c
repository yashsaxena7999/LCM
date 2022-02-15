#include <stdio.h>
int Lcm(int x, int y){
static int c=0;
c=c+y;
if(c%x==0 && c%y==0){
 return c;
}
return Lcm(x,y);
}                     
int main(){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Lcm of %d and %d is %d",a,b,Lcm(a,b));
                     
return 0;
}
