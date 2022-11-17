#include<stdio.h>

float avg(float a,float b,float c){
    float n=0;
    n = (a+b+c)/3;
    return n;
}


int main(){
    float a=0,b=0,c=0;
    scanf("%f %f %f",&a,&b,&c);
    printf("%.2f",avg(a,b,c));

}



