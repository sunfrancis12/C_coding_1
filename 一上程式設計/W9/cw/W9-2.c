#include<stdio.h>

float avg(float a,float b,float c,float d){
    float n=0;
    n = (a+b+c+d)/4;
    return n;
}


int main(){
    float a=0,b=0,c=0,d=0;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    printf("%.2f",avg(a,b,c,d));

}



