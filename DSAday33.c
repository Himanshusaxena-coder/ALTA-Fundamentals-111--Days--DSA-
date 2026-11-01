#include <stdio.h>
int main(){
    int a[]={10,20,30};
    int n= 3,sorted =1;
    for (int i=0;i< n -1;i++){
        if(a[i]> a[i +1]){
            sorted = 0;
            break;
        }
    }
    printf("%s", sorted?"True":"False" );
    printf("\n");
    return 0;
}