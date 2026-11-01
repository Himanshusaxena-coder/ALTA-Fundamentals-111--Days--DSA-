#include <stdio.h>
int main(){
    int arr[] ={33,7,21,5,3};
    int n=5,target=26;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d, %d\n",i,j);
                return 0;
        }
        }
    }
    return 0;
}