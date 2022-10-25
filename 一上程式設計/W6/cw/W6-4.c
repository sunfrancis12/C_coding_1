#include<stdio.h>
int main(){

    int i=1;
    int n=0;
    printf("Enter number of entries in table: ");
    scanf("%d",&n);

    while(i<=n){
        printf("%10d%10d\n",i,i*i);
        i++;
    }

    return 0;
}