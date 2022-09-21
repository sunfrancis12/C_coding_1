#include<stdio.h>
int main(void)
{
    int height,length,width,inchs,volume,weight;
    
    scanf("%d",&height);
    scanf("%d",&length);
    scanf("%d",&width);
    scanf("%d",&inchs);

    volume = height*length*width;
    weight = (volume + 99)/inchs;

    printf("%d",weight);

}