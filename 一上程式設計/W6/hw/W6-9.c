#include<stdio.h>
int main(){
    int num=-1,ans=0;

    while(num!=0){
        scanf("%d",&num);
        if(num>0) ans += num;
    }
    printf("%d",ans);
}