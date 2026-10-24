#include <stdio.h>
int main(){
    int temp;
    int a,b;
    printf("Enter the number A = ");
    scanf("%d",&a);
    printf("Enter the number B = ");
    scanf("%d",&b);
    temp = a; 
    a=b;
    b=temp;
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    return 0;
}