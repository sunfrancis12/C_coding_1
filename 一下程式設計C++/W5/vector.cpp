#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v = {1,2,3,4,5};

    v.push_back(6);
    v.push_back(7);

    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}