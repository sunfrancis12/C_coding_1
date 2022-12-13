#include<stdio.h>

int main(){

    int a=10,b=10;

    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("%d,%d ",i,j);
        }
        printf("\n");
    }


}