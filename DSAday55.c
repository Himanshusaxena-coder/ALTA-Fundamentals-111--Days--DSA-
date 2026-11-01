#include <stdio.h>
int solve(int a[10][10], int n,int r,int c){
    if (r==n-1&& c==n-1)
        return 1;
    if(r >= n||c>=n||a[r][c]==0)
        return 0;
    a[r][c]=0;
    if (solve(a, n,r+1,c)||
        solve(a,n,r,c+1))
        return 1;
    return 0;
}
int main(){
    int a[10][10], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf(solve(a,n,0,0) ? "Path exists":"No path");
    printf("\n");
    return 0;
}