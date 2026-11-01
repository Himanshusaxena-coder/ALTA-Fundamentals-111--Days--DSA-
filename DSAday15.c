#include<stdio.h>
int main (){
    int N,i =2,Prime=1;
    printf("Enter Number : ");
    scanf("%d", &N);
    for (i=2; i<N; i++){
        if (N%i ==0){
            Prime=0;
            break;
        }
    }
    if (Prime ==1){
        printf("Prime\n");

    }else{
        printf("Not Prime\n");
    }
    return 0;
}               
  
  








                   