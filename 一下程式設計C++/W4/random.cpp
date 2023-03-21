#include<iostream>
#include<random>
#include<time.h>

using namespace std;

int main(){
    default_random_engine engine(time(NULL));
    uniform_int_distribution <unsigned int>randomint{1,6};

    int x = 0;

    for(int i=1;i<=10;i++){
        x = randomint(engine);
        cout<<x<<endl;
    }
}