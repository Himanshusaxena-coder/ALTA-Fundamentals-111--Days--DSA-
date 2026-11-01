#include <stdio.h>
int SumDigit(int n);

int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("%d\n",SumDigit(n));
    return 0;
}

int SumDigit(int n){
    if (n==0)
           return 0;
        return (n%10) +SumDigit(n/10);
    }
