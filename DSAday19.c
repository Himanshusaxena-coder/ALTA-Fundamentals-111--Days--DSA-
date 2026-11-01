# include <stdio.h> 
int main (){
    int i = 1,num;
    printf("Enter the Number =");
    scanf("%d", &num);
    while (i<=num)
        if(i % 3 == 0){
        i+=1;
        continue;
    } else {
        printf("%d " ,i);
        i+=1;
}
return 0;
}