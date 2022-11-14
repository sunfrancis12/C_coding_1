#include<stdio.h>
int main(){
    int a[5][5],r[5]={0},c[5]={0};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        printf("Enter row %d: ",i+1);
        for (int j = 0; j < 5; j++){
            r[i] += a[i][j];
            c[i] += a[j][i];
        }
        printf("\n");
    }
    
    printf("Row totals: ");
    
    for (int i = 0; i < 5; i++){
        if(i==4){
                printf("%d",r[i]);
                continue;
            }
        printf("%d ",r[i]);  
    }
    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++){
        if(i==4){
                printf("%d",c[i]);
                continue;
            }
        printf("%d ",c[i]);  
    }
    
       
}