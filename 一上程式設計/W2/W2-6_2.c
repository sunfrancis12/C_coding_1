#include<stdio.h>
int main(){
    int height=0,length=0,width=0,inchs=0,volume=0,weight=0;
    volume = height*length*width;
    weight = (volume + 99)/inchs;

    scanf("%d%d%d%d",&height,&length,&width,&inchs);
    printf("%d",weight);

    return 0;

}
