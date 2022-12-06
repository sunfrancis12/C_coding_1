#include<stdio.h>

/*
int sort(int n[10]){
    int temp =0;
    for(int j=0;j<10;j++){
        if(n[j]>n[j+1]){
            temp = n[j+1];
            n[j+1] = n[j];
            n[j] = temp;
            j=0;
        }
    }

    return n[10];
}
*/

int main(){

    int a[10]={0};
    
    for (int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }

    int temp =0;
    for(int j=0;j<10;j++){
        if(a[j]>=a[j+1] && j!=9){
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
            j=-1;
        }
    }

    for (int i = 0; i < 10; i++){
        printf("%d",a[i]);
    }


    
}