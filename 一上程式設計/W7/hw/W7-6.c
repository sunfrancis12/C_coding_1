#include<stdio.h>
int main(){
    char a,b;
    float x,y,z;

    printf("Enter an expression (example: 1+2.5*3):  ");
    scanf("%f%c%f%c%f",&x,&a,&y,&b,&z);

    if(a=='+') x += y;
    else if(a=='-') x -= y;
    else if(a=='*') x *= y;
    else x /= y;

    if(b=='+') x += z;
    else if(b=='-') x -= z;
    else if(b=='*') x *= z;
    else x /= z;

    printf("Value of expression: %.1f",x);

}