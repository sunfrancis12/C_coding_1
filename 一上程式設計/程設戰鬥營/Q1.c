#include<stdio.h>
int main(){
    int n=0,m=0;

    scanf("%d",&n);
    scanf("%d",&m);

    int a[501][501],b[501]={0};
    

    for (int i = 1; i <=n; i++){
        for (int j = 1; j <=m; j++){
            scanf("%d",&a[i][j]);
            b[i] += a[j][i];
        }
    }

    int big = 0;

    for(int i=1;i<=n;i++){
        if(b[i] >= big) big = i;
    }

    printf("%d",big);
    
}