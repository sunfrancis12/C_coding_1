#include<stdio.h>
#define FRZ 32.0f
#define SCALE (5.0f / 9.0f)

int main(){
    float fahrenheit, celsius;

    scanf("%f",&fahrenheit);
    printf("%.2f",(fahrenheit - FRZ)*SCALE);

    return 0;
}