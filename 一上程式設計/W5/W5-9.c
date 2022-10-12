#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0 && num<9){
        printf("The number %d has 1 digit",num);
    }

    if(num>10 && num<100){
        printf("The number %d has 2 digits",num);
    }

    if(num>100 && num<1000){
        printf("The number %d has 3 digits",num);
    }

    if(num>1000 && num<10000){
        printf("The number %d has 4 digits",num);
    }

    if(num>=10000 || num<=0) printf("Please enter the whole between 1 and 9999");
}