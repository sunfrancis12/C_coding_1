#include<stdio.h>
int main(){
    int x,x1;
    int y,y1;

    scanf("%d/%d",&x,&y);
    scanf("%d/%d",&x1,&y1);

    printf("%d/%d",x*y1+x1*y,y*y1);

}