#include<stdio.h>
#include<math.h>
#define PI 3.14159f
#define FARCTION (4.0f / 3.0f)

int main(){

    float r=0;
    scanf("%f",&r);
    printf("%.2f", pow(r,3)*FARCTION*PI);

}