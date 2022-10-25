#include<stdio.h>
int main(){
    float num=0,big=0;

    do{
        printf("Enter a number (enter 0 to end): ");
        scanf("%f",&num);
        if(num>big) big = num;
    }while(num!=0);

    printf("The largest number entered was %.2f",big);

}