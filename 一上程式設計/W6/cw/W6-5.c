#include<stdio.h>
int main(){

    int i=1;
    int n=0;
    printf("Enter number of entries in table: ");
    scanf("%d",&n);

    while(i<=n){
        printf("%10d%10d%10d\n",i,i*2,i*3);
        i++;
    }

    return 0;
}