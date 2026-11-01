#include<stdio.h>
int main(){
    int arr[]={1,1,0,1,1,1};
    int n=6,count =0,max =0;
    for(int i= 0; i<n;i++){
        if(arr[i]==1){
            count++;
            if (count>max)
                max =count;
        }else{
            count=0;
        }
}
    printf("%d", max);
    printf("\n");
    return 0;
}