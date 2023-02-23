#include"index.h"
#include<iostream>
using namespace std;

index::index(int x){
    a = x;
};


void index::digit(){
    
    while(a>1){
        cout<<a%10<<"   ";
        a = a/10;
    }
}

void index::output(){
    for (int i = 1; i <= a; i++)
    {
        cout<<i<<"   "<<i*i<<endl;
    }
    
}