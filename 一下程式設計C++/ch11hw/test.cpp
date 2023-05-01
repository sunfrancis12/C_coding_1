
// C++ program to implement a
// composite class
using namespace std;
#include <iostream>
 
// Class with a private parameter
// and the getters and setters
class One {
 
    // Private parameter
private:
    int num;
 
    // Public setter and getter
public:
    void set(int i)
    {
        num = i;
    }
    int get()
    {
        return num;
    }
};
 
// Another class
class Two {
 
    // Public method and the object
    // of the previous class
public:
    One O;
    void show()
    {
        cout << "\n Number = "
             << O.get();
    }
};
 
// Driver code
int main()
{
    // Creating the object of
    // class Two
    Two T;
 
    // Perform some operation using
    // the object of One in this class
    T.O.set(100);
    T.show();
}