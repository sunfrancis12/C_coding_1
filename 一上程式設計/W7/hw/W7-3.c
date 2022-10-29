#include<stdio.h>
int main(){

    int h=0,m=0;
    char a;
    printf("Enter a 12-hour time (hours:minutes AM/PM): ");

    scanf("%d:%d %c",&h,&m,&a);

    if(h==12){
        printf("Equivalent 24-hour time: %d:%d",h,m);
        return 0;
    }

    if(a=='P' || a=='p')  h +=12;

    printf("\nEquivalent 24-hour time: %.2d:%.2d",h,m);



    

}