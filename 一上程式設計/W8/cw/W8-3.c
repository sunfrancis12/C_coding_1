#include<stdio.h>
int main(){
    int a[10]={0},b;

    printf("Enter a number: ");
    scanf("%d",&b);

    for (int i = 0; i <10; i++){
        int j;
        j = b;

        while (j!=0){
            if(j%10==i) a[i]++;
            j = j/10;
        }

        if(a[i]>1){
            printf("Repeated digit");
            return 0;
        }
        
    }

    printf("No repeated digit");

    return 0;
    
}