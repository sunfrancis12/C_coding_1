#include<stdio.h>
typedef int Myint;
int main(){
    Myint n,temp=0;
    scanf("%d",&n);

    while(n!=1){

        temp =2;
        
        while(n%temp!=0){
            temp++;
        }
        printf("%d*",temp);
        n /= temp;
    }
    
}