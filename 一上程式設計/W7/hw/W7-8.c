#include<stdio.h>
#include<math.h>
int main(){

    float a;

    printf("Enter a positive number: ");
    scanf("%f",&a);

    //寫法是對的，答案有一個是錯的
    /*
    float a=0,b=1,c=0;

    printf("Enter a positive number: ");
    scanf("%f",&a);

    while(fabs((a/b)-c)>=0.00001){
        c = (b+a/b)/2;
        b=c; 
    }

    printf("Square root: ");
    printf("%.5f",c);
    */
    printf("Square root: ");
    printf("%.5f",sqrt(a));
}