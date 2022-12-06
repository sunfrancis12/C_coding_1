#include<stdio.h>

int main(){

    int a[10],*p[10];

    for (int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
        p[i] = &a[i];
    }

    for (int i = 0; i < 10; i++){
        printf("%d %p\n",*p[i],p[i]);
    }
    


}