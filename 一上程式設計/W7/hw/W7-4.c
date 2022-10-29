#include<stdio.h>
int main(){

    char c;
    int a=0;

    printf("Enter a sentence: ");

    while(c!='\n'){
        scanf("%c",&c);
        
        //轉小寫
        if(c<='Z' && c>='A'){
            c +=32;
        }

        if(c == 'a'|| c=='e' || c=='i' || c=='o' || c=='u') a+=1;
    }

    printf("\nYour sentence contains %d vowels.",a);
}