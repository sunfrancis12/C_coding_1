#include<stdio.h>
#include<string>
int main(){
    int a[10], *p;

    for (int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }

    /*
    for (int i = 0; i < 10; i++){
        printf("%p\n",&a[i]);
    }
    */
   for ( p = a; p < a + 10; p++){
        printf("%d",*p);
   }
   
    
    
}