#include<stdio.h>
int main(){
    int arr[]={1,2, 3,4,5};
    int n=5,d=2;
    for(int i =d;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i< d;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
