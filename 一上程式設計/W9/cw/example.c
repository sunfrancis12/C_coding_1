#include<stdio.h>

float avg(float a,float b){
    float c=0;
    c = (a+b)/2;
    return c;
}


int main(){
    float a=0,b=0;
    scanf("%f %f",&a,&b);
    printf("%f",avg(a,b));

}



