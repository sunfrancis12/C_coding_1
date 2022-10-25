#include<stdio.h>
int main(){
    int i=2,n=0;

    scanf("%d",&n);
    printf("\n");

    while(i<=n){

        if(i*i<=n) printf("%d",i*i);
        else break;

        if(i*i==n) break;

        if((i+2)*(i+2)<=n){
            printf("\n");
        }

        i+=2;
    }

    return 0;
}