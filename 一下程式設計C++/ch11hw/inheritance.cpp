#include <iostream>

using namespace std;
class Family{
    protected:
    string Name;
public:
    void setname(string name){
        Name = name;
    }
    string getname(){
        return Name;
    }
};

class Mom:public Family{
public:
    string getname(){
        return "Mom's name is " + Name;
    }
    
};
class Dad:public Family{
public:
     string getname(){
        return "Dad's name is "+ Name;
    }
  
};
int main()
{   
    string x, y;
    Family f;
    Mom m;
    Dad d;
    Family *f1 = &m;
    Family *f2 = &d;
    
    cout <<"Type mom's name: ";
    cin >> x;
    f1 -> setname(x);
    cout <<"Type dad's name: ";
    cin >> y;
    f2 -> setname(y);
    
    cout << m.getname() << endl;
    cout << d.getname() << endl;
    return 0;
}