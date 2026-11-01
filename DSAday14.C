# include <stdio.h>
int main (){
    int N;
    printf("Enter Number of N = ");
    scanf("%d", &N);
    while (N>0){
        printf("%d\n", N);  
        N-=1; 
    }
    return 0;
}