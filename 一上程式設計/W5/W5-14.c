#include<stdio.h>
int main(){
    int num=0;
    printf("Enter a numerical grade: ");
    scanf("%d",&num);

    if(num<60) printf("Letter grade: F");
    else if(num<70)printf("Letter grade: D");
    else if(num<80) printf("Letter grade: C");
    else if(num<90) printf("Letter grade: B");
    else printf("Letter grade: A");
    return 0;

}