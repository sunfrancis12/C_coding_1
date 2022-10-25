#include<stdio.h>
int main(){

    int i=1;
    int num=0;
    int n=0;
    scanf("%d",&n);

    while(i<=n){
        num += i;
        i++;
    }

    printf("%d",num);

    return 0;
}