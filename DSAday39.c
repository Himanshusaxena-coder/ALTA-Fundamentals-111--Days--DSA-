#include <stdio.h>
int main(){
    int a[]={5,7,9};
    int b[]={1,5,7};
    int i=0,j =0;
    while(i<3 &&j<3){
        if(a[i]< b[j])
            printf("%d ",a[i++]);
        else if(a[i] > b[j])
            printf("%d ",b[j++]);
        else{
            printf("%d ", a[i]);
            i++,j++;
    }
    }
    while(i< 3)
        printf("%d ", a[i++]);
    while(j< 3)
        printf("%d ",b[j++]);
        printf("\n");
    return 0;
}