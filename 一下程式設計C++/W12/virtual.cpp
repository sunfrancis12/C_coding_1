#include <iostream>

using namespace std;

class Family{
    protected:
    string Name;
public:
     void setname(string name){
        Name = name;
    }
     virtual string getname(){
        return "Family:" + Name;
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
class Son:public Mom{
public:
    string getname(){
        return "Son's name is " + Name;
    }
    
};
int main()
{   
    string x, y, z;
    Family f;
    Mom m;
    Dad d;
    Son s;
    Family *f1 = &m;
    Family *f2 = &d;
    Family *f3 = &s;

    cout <<"Type mom's name: ";
    cin >> x;
    f1 -> setname(x);
    cout <<"Type dad's name: ";
    cin >> y;
    f2 -> setname(y);
    cout <<"Type son's name: ";
    cin >> z;
    f3 -> setname(z);
    
    cout << m.getname() << endl;
    cout << d.getname() << endl;
    cout << s.getname() << endl;


    return 0;
}