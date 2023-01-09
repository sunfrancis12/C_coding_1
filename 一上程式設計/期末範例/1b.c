#include<stdio.h>
#include<string.h>



int main(){

    int max=0,min=0;
    char c[20]="",big[20],small[20];

    while(1){
        printf("Enter word: ");
        scanf("%s",c);
        
        //長度為4時終止
        if(strlen(c)==4) break;

        //第一次
        if(strlen(c)>max && min == 0){
            max = strlen(c);
            min = max;
            strcpy(big,c);
            strcpy(small,c);
        }

        if(strlen(c)>max){
            max = strlen(c);
            strcpy(big,c);
        }

        if(strlen(c)<min){
            min = strlen(c);
            strcpy(small,c);
        }
        
    }

    printf("smallest word:%s\n",small);
    printf("biggest word:%s",big);

}

