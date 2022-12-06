#include<stdio.h>

int main(){
    int num=10;
    int* ptr = &num;
    char* ptr_c = &num;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",ptr_c);
    printf("%c",*ptr_c);
    

}