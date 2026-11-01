
# include <stdio.h> 
int main (){
    int i = 1,num;
    printf("Enter the Number =");
    scanf("%d", &num);
    while (i<=num){
        if(i % 3 == 0&&i % 5==0){
            printf("FizzBuzz\n");
        }
        else if(i % 3 == 0){
            printf("Fizz\n");
        }
        else if (i%5 ==0){
            printf("Buzz\n");
        }
    else{
        printf("%d\n" ,i);
    }
    i+=1;
    }
    return 0;
}
