#include<stdio.h>

int* max(int* a, int* b){
    if(*a> *b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int  n[10];
    int* a[10];
    int *temp,b=0;
    temp = &b;


    for (int i = 0; i <10; i++){
        scanf("%d",&n[i]);
        a[i] = &n[i];
    }

    for (int i = 0; i <10; i++){
        temp = max(a[i],temp);
    }

    printf("%d",*temp);
    

    
}