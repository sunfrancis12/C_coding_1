#include<stdio.h>

void pt(int *p){
    *p += 10; 
}

int main(){
    int *p,a;
    scanf("%d",&a);
    p = &a;
    pt(p);
    //*p +=10;

    printf("%d %p\n",*p,p);
    printf("%d",a);
}