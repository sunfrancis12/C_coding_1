#include<stdio.h>
int main(){

    int day,start;

    scanf("%d",&day);
    scanf("%d",&start);
    printf("\n");

    start -=1;

    for (int i = 0; i < start*3; i++){
        printf(" ");
    }
    

    for (int i = 1; i <= day; i++){

        if(i==day){

            printf("%2d",i);

            break;
        }

        if((start +i)%7==0){

            printf("%2d",i);
            printf("\n");

            continue;
        }

        printf("%2d ",i);
 
    }
    

}