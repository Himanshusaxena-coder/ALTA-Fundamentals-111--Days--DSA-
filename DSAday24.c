#include <stdio.h>
void Addition();
void Factorial();
void Prime();
void Largest();
int main(){
    int Choice;
    do{
        printf("####### MENU #######\n");
        printf("1. Addition Two Number\n");
        printf("2. Factorial \n");
        printf("3. Prime \n");
        printf("4. Larger Number\n");
        printf("5. Exit \n");

        printf("Enter your Choice = ");
        scanf("%d", &Choice);

        switch (Choice)
        {
            case 1:
                Addition();
                break;
            case 2:
                Factorial();
                break;
            case 3:
                Prime();
                break;
            case 4:
                Largest();
                break;
            case 5:
                printf("Exit\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    } while (Choice != 5);
    return 0;
}
void Addition(){
    int A,B;
    int Add;
    printf("Enter the Number of A= ");
    scanf("%d",&A);

    printf("Enter the Number Of B= ");
    scanf("%d",&B);
    Add = A+B;
    printf("%d\n",Add);
}
void Factorial(){
    int Factorial =1,Number,i=1;
    printf("Enter the Number = ");
    scanf("%d",&Number);
    while(i<= Number){
        Factorial = Factorial * i;
        i++;
    }
    printf("%d\n", Factorial);
}
void Prime(){
    int N, i= 2,Prime =1;
    printf("Enter Number = ");
    scanf("%d", &N);
    if (N <= 1){
        Prime = 0;
    }
    else{
        for (i =2; i< N;i++){
            if (N % i==0){
                Prime = 0;
                break;
            }
        }
    }

    if (Prime==1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
}
void Largest(){
    int a, b, c;
    printf("Enter Your Three Number = ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c){
        printf("a is Largest %d\n", a);
    }
    else if (b >= a && b >= c){
        printf("b is Largest %d\n", b);
    }
    else{
        printf("c is Largest %d\n", c);
    }
}















// # include<stdio.h>

// void Addition();
// void Factorial();
// void Prime();
// void Largest();
// int main (){
//     int Choice;
//     do{
//     printf("1. Addition Two Number\n");
//     printf("2. Factorial \n");
//     printf("3. Prime \n");
//     printf("4. Larger Number\n");
//     printf("5. Exit \n");

//     printf("Enter your Choice =");
//     scanf("%d",&Choice);
// switch (Choice)
// {
//     case 1:
//         Addition();
//         break;
// } 
// void Addition();
// {  
//     int A , B;
//     int Add;
//     printf("Enter the NUmber Of A =");
//     scanf("%d",&A);
//     printf("Enter the NUmber Of B =");
//     scanf("%d",&B);
//     Add=A+B;
//     printf("%d\n",Add);
// }
//     break;      

    





// //     int Choice;
// // printf("1. Addition Two Number\n");
// // printf("2. Factorial \n");
// // printf("3. Prime \n");
// // printf("4. Larger Number\n");
// // printf("5. Exit \n");
// // printf("Enter your Choice =");
// // scanf("%d",&Choice);
// // switch (Choice)
// // {
// // case 1:
// // int A , B;
// // int Add;
// // printf("Enter the NUmber Of A =");
// // scanf("%d",&A);
// // printf("Enter the NUmber Of B =");
// // scanf("%d",&B);
// // Add=A+B;
// // printf("%d\n",Add);

// //     break;

// // case 2:
// // int Factorial = 1 , Number,i=1;
// // printf("Enter the Number =");
// // scanf("%d",&Number);
// // while (i<=Number){
// //     Factorial*=i;
// //     i++;
// // }
// // printf("%d\n",Factorial);
// // return 0;
// // break;
// // case 3:
// // int N,I =2,Prime=1;
// //     printf("Enter Number : ");
// //     scanf("%d", &N);
// //     for (i=2; I<N; i++){
// //         if (N%I ==0){
// //             Prime=0;
// //             break;
// //         }
// //     }
// //     if (Prime ==1){
// //         printf("Prime\n");

// //     }else{
// //         printf("Not Prime\n");
// //     }
// //     return 0;
// // break;
// // case 4:
// // int a, b, c;
// // printf("Enter Your Three Number =");
// // scanf("%d %d %d",&a , &b,&c);
// // if (a>b&& a>c){
// //     printf("a is Largest %d\n",a);
// // }
// // else if (b>c&& b>a){
// //     printf("b is Largest %d\n",b);

// // }else if (c>b && c>a){
// //     printf("c is Largest %d\n", c );
// // }else {
// //     printf("All are equal");
// // }
// // return 0;

// // break;



// // default:
// //     break;
// // }








// } while (Choice!=5);
// return 0;


// }


