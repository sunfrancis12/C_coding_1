#include<iostream>
#include<iomanip>
using namespace std;

void Prime(int n,int *p,int *c){

    
    for(int i=2;i<n;i++){
        if(n%i==0){
            return;
        }
    }

    *c = *c + 1;
    *p = *p + 1;

    cout<<setw(7)<<n;
    return;
}

int main(){
    int n=1,count=1;
    int *p = &n;
    int *c = &count;


    cout<<"      2";

    for (int i = 3; i <= 10000; i++){

        Prime(i,p,c);

        if(count%11==0){
            count = 1;
            cout<<endl;
        }
    }

    cout<<endl;

    cout<<"Total of "<<n<<" prime number between 1 -10000";
    

}