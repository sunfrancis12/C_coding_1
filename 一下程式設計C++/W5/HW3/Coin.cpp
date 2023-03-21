#include<iostream>
#include<random>
#include<ctime>

using namespace std;

int main(){

    default_random_engine generator( time(NULL));
    uniform_real_distribution<float> unif(0,1);

    float x = unif(generator);
    int t=0,h=0,count=0;

    for(int i=1;i<=100;i++){

        x = unif(generator);
        
        if(x>=0.5){
            count++;
            if(count == 10){
                count = 0;
                cout<<"Tails"<<endl;
                t++;
            }

            else{
                cout<<"Tails ";
                t++;
            }
        }

        else{
            count++;
            if(count == 10){
                count = 0;
                cout<<"Heads"<<endl;
                h++;
            }

            else{
                cout<<"Heads ";
                h++;
            }
        }
        

    }

    cout<<"The total number of Heads was"<<h<<endl;
    cout<<"The total number of Tails was"<<t;
    
}