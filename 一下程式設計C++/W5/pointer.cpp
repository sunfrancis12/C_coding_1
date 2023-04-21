#include <iostream> 
#include<Bits/stdc++.h>
using namespace std; 

int main() { 
    int n = 10;
    int m = 20;

    int *p = &n;

    *p = 20;

    cout<<n;

    

    return 0; 
}