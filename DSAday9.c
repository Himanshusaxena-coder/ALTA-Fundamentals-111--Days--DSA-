# include <stdio.h>
int main(){
    float Weight, Height, BMI ;
    printf("Enter Weight : ");
    scanf("%f", &Weight);
    printf("Enter Height : ");
    scanf("%f", &Height);
    BMI = Weight/(Height*Height) ;
    if (BMI <= 18.5)
        printf("Underwieht\n");
        else{
            if (BMI <= 24.9)
            printf("Normal\n");
            else{
                if(BMI <=29.9)
                printf("Overweight\n");
                else{
                    printf("Obese\n");   
                }
            }    
        }
return 0;
}