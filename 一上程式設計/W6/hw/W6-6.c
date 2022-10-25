#include<stdio.h>
int main(){

    int ans=0,big=100,small=0,num=-1;

    printf("Enter the answer number(0-100):");
    scanf("%d",&ans);
    printf("\n");

    printf("Game start!\n\n");
    
    while(num!=ans){

        printf("Enter a number(%d-%d):",small,big);
        scanf("%d\n",&num);
        printf("\n");

        if(num<=small && num<=ans && num>0)
            small = num;

        else if(num>=small && num<=ans)
            small = num;

        else if(num>=small && num>=ans)
            big = num;
    }

    printf("BANG!");
}