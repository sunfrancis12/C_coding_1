#include<stdio.h>
int main(){
    int x,x1;
    int y,y1;
    int x2,y2;

    scanf("%d/%d",&x,&y);
    scanf("%d/%d",&x1,&y1);
    scanf("%d/%d",&x2,&y2);

    printf("%d/%d",x*y1*y2 + x1*y*y2 + x2*y*y1,y*y1*y2);

}