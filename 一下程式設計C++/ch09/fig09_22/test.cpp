#include <iostream> 
using namespace std; 

int main() { 

    
    class test{

    public:
        test(){

        };
        //~test();
    
    private:
        int x;
    };
    
    
    int n = 10;
    int m = 20;

    int *p = &n;

    *p = 20;

    test t;

    cout<<"p  "<<p<<endl;
    cout<<"*P  "<<*p<<endl;
    cout<<"&t  "<<&t;

    

    return 0; 
}