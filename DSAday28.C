#include<stdio.h>
struct student{
    char name[20];
    int age,marks;
};
int main(){
    struct  student s={"Rachit Kumar",20,79};
    printf("%s,%d,%d",s.name,s.age,s.marks);
    printf("\n");
    
}