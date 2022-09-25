#include<stdio.h>
int main(){
    int x,x1;
    int y,y1;

    printf("Enter first fraction:");
    scanf("%d/%d",&x,&y);

    printf("Enter second fraction:");
    scanf("%d/%d",&x1,&y1);

    printf("The sum is %d/%d",x*y1+x1*y,y*y1);

}