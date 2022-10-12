#include<stdio.h>
int main(){
    int num=0;
    printf("Enter wind speed (knots): \n");
    scanf("%d",&num);

    if(num<1) printf("Wind force at %d knots is Calm",num);
    if(num>=1 && num<=3) printf("Wind force at %d knots is Light air",num);
    if(num<=27 && num>3) printf("Wind force at %d knots is Breeze",num);
    if(num<=47 && num>27) printf("Wind force at %d knots is Gale",num);
    if(num<=63 && num>47) printf("Wind force at %d knots is Storm",num);
    if(num>63) printf("Wind force at %d knots is Hurricane",num);

    return 0;

}