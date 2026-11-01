#include<stdio.h>
int main (){
    int arr[]={10,23,41};
    int max=arr[0];
    for(int i=1;i<3;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d",max);
    printf("\n");
    return 0;
}