#include<stdio.h>
int main(){

    char a[14];

    printf("Enter phone number: ");
    scanf("%s",a);

    for (int i = 0; i < 14; i++){
        if(a[i]>='A' && a[i]<='C'){
            a[i] = '2';
        }
        
        if(a[i]>='D' && a[i]<='F'){
            a[i] = '3';
        }

        if(a[i]>='G' && a[i]<='I'){
            a[i] = '4';
        }

        if(a[i]>='J' && a[i]<='L'){
            a[i] = '5';
        }

        if(a[i]>='M' && a[i]<='O'){
            a[i] = '6';
        }

        if(a[i]>='P' && a[i]<='S'){
            a[i] = '7';
        }

        if(a[i]>='T' && a[i]<='V'){
            a[i] = '8';
        }

        if(a[i]>='W' && a[i]<='Y'){
            a[i] = '9';
        }

        if(a[i]>='a' && a[i]<='C'){
            a[i] = '2';
        }
    }

    printf("%s",a);
    
}