#include<stdio.h>
int main(){
    int a[4][4],t1=0,t2=0;

    for (int i = 0; i < 4; i++){
        for(int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++){
        t1 = a[i][1] / a[i][0];
        t2 = a[i][3] / a[i][2];
        if(t1<t2){
            printf("Case #%d: You owe me a beer!\n",i+1);
        }
        else{
            printf("Case #%d: No beer for the captain.\n",i+1);
        }

        if((t1+t2)%2==0){
                printf("Avg. arrival time: %d\n",((t1+t2)/2));
        }
        else{
                printf("Avg. arrival time: %d/2\n",t1+t2);
         }
        
    }

    
    
}