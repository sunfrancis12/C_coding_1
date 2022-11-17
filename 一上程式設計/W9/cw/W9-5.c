#include<stdio.h>

int sum(int a){
    float ans=0,n[100]={0};
    
    for (int i = 0; i < a; i++){
        scanf("%f",&n[i]);
        ans +=n[i];
    }
    
    return ans;
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));

}



