# include <stdio.h>
int main (){
    int Num=1;
    while (1){
        if (Num % 7==0){
        printf("%d\n", Num);  
        break;
    }
    Num+=1;
    }
    return 0;
}