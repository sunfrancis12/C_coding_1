#include<stdio.h>
int main(){

    int num=0;

    printf("Enter number of entries in table: ");
    scanf("%d",&num);

    for (int i = 1; i <= num ;i++){
        printf("%10d%10d\n",i,i*i);
    }
    
}