#include<stdio.h>
int main(){

    int num[4][4]={0};
    int row[4]={0};
    int column[4]={0};
    int diagonal[2]={0};


    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        scanf("%d",&num[i][j]);
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){

        row[i] += num[i][j];
        column[j] += num[i][j];

        if(i==j)diagonal[0] += num[i][j];

        if(i+j==3) diagonal[1] += num[i][j];

        if(j==3) printf("%2.d",num[i][j]);
        else printf("%2.d ",num[i][j]);

        }
        printf("\n");
    }

    printf("\n");

    printf("Row sums: %d %d %d %d\n",row[0],row[1],row[2],row[3]);
    printf("Column sums: %d %d %d %d\n",column[0],column[1],column[2],column[3]);
    printf("Diagonal sums: %d %d",diagonal[0],diagonal[1]);

}