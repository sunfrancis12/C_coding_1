#include<iostream>
using namespace std;

void Prime(int n,int*p){

    if(n ==0 && n==1 && n==2){
        *(p + n) = 1;
        return;
    }

    for(int i=1;i<=n;i++){
        if(*(p + i) == 1) continue;
    }
}

int main(){
    int prime[10001]={0};


}