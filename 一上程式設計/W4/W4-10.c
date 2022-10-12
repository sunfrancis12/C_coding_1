#include<stdio.h>
int main(){

    int num=0,j=0;
    int a[5]={0};

    printf("Enter a number between 0 and 32767:");
    scanf("%d",&num);
    printf("In octal, your number is:");

    while(num>0){
        a[j] = num%8;
        num = (num-num%8)/8;

        if(num==0){
            a[j+1] = 0;
            break;
        }
        j++;
    }

    for(int i=4;i>=0;i--){
        printf("%d",a[i]);
    }

    return 0;

}