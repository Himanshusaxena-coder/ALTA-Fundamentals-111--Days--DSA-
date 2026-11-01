# include <stdio.h>
int main (){
    int Number ,Number1=0 ,Number2=1, i=1, Result ;
    printf("Enter the Number = ");
    scanf("%d", &Number);
    while (i<=Number){
        printf("%d ",Number1);
        Result = Number1 + Number2;
        Number1 = Number2;
        Number2 = Result;
        i++;
    }
   return 0;
}