#include <iostream>
using namespace std;

class base {
public:
    base(){
        cout << "base constructor is called "<< endl;
    }
    base(int z):x(z){   
        cout<< "x= "<<x <<endl;
        cout << "derived has called the base constructor "<< endl;
    }
    int x;
    void fun();
};



class derived : public base {
public:
    derived(int x=0):base (x){
        cout << "derived constructor called "<< endl;
    }
    int x;
    void fun();
};


int main() {
    base *p = new derived;


    return 0;
}

void derived::fun(){
    cout << "DERIVED FUN DERIVED X= " << x << endl;
    cout << "IN DERIVED FUN BASE X= " << base::x << endl;
}

void base::fun() {
    cout << "BASE FUN " << x << endl;
}
