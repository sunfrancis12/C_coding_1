#include<stdio.h>
int main(){
    float ans=0,num=0,temp=1;
    scanf("%f",&num);
    
    for (float i = 1; i <= num+1; i++){
        temp = 1;

        for (float j = 1; j <= i; j++){
            temp *= j;
        }
        ans += i/temp;
    }

    printf("%.4f",ans);
    
}