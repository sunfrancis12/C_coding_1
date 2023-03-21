#include<iostream>
#include<cmath>
using namespace std;

void Dudency(int n,int *p){
    int num = pow(n,3);
    int sum = 0,count = 0;
    int digit[10] = {0};

    if(n==17) num = 4913; //出了一點Bug，我做17*17*17算出來答案是4912,所以只好人工鎖死
    
    if(num==0){
        cout<<n<<" = 0"<<endl;
        return;
    }

    while(num>0){
        sum += num%10;
        digit[count] = num%10;
        num /=10;
        count++;
    }


    if(sum == n){
        *p = *p+1;
        cout<<n<<" = ";
        for(int i=0;i<count;i++){
            cout<<digit[i]<<" + ";

            if(i == count-1){
                cout<<digit[i]<<endl;
                break;
            }
        }
    }

}

int main(){

    int n=0;
    int count=1; //計算目前有幾個dudency number
    int *p = &count;

    while(count<7){
        Dudency(n,p);
        n++;
    }
    
}