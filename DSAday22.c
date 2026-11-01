#include<stdio.h>
void sum(int *x,int *y,int *result){
    *result = *x + *y;
}
int main(){
    int x =100,y=20,result;
    sum(&x,&y,&result);
    printf("%d",result);
    printf("\n");
    return 0;
}
