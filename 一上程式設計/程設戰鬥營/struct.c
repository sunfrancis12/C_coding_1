#include<stdio.h>

struct num{
    int a1;
    int b1;
};

int main(){

    struct num test[10];
    int a= 1,b=2;

    for (int i = 0; i < 10; i++){
        a++;
        b++;
        test[i].a1 = a;
        test[i].b1 = b;
    }

    for (int i = 0; i < 10; i++){
        printf("%d,%d\n",test[i].a1,test[i].b1);
    }
    

}
