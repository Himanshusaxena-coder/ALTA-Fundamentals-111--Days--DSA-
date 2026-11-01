#include<stdio.h>
void Calculate(int a,int b, int *quotient, int *remainder)
{
*quotient= a / b;
*remainder= a % b;
}
int main (){
    int a = 22,b = 3;
    int quotient, remainder; 

    Calculate (a,b,&quotient,&remainder); 

    printf("Quotient = %d\n" ,quotient);

    printf("Remainder =%d\n",remainder);

    return 0;

}
