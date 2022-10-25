#include<stdio.h>
int main(){
    int i=1,n=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n){

        if(i%2==1){
            i++;
            continue;
        }
        
        if(i*i<=n) printf("%d",i*i);
        if(i==n) break;
        printf("\n");
        i++;
    }

    return 0;
}