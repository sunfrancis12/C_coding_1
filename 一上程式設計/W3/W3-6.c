#include<stdio.h>
int main(){
    int x,x1;
    int y,y1;

    printf("Enter two fractions separated by a plus sign:");
    scanf("%d/%d+%d/%d",&x,&y,&x1,&y1);

    printf("The sum is %d/%d",x*y1+x1*y,y*y1);

}