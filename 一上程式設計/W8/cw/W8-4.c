#include<stdio.h>
int main(){
    float a[10][10]={0};
    int r=0,n=0;

    printf("Enter interest rate: ");
    scanf("%d",&r);
    printf("Enter number of years: ");
    scanf("%d",&n);

    printf("\nYears");
    for (int i = 0; i < 5; i++){
        printf("%6d%%",r+i);
    }

    printf("\n");

    for (int i = 0; i <n; i++){
        printf("  %d    ",i+1);
        for (int j = 0; j<5 ;j++){
            if(i==0){
                a[i][j] = 100+(r+j);
                printf("%7.2f",a[i][j]);
                continue;
            }
            
            a[i][j] = a[i-1][j]+a[i-1][j]*(r+j)*0.01;
            printf("%7.2f",a[i][j]);
        }
        
        printf("\n");
    }

    return 0;
    
}