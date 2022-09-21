#include<stdio.h>
#include<math.h>

int main(){

    int r=0,r_20,r_10,r_5;
    scanf("%d",&r);
    r_20 = (r%20); //13
    printf("%d ",(r-(r_20))/20);
    r_10 = (r_20%10); //3
    printf("%d ",(r_20-(r_10))/10);
    r_5 = (r_10%5); //3
    printf("%d ",(r_10-(r_5))/5);
    printf("%d",r_5);


}