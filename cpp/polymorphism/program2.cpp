#include <iostream>
using namespace std;

class base {
public:

    int x;

    base(){
        cout << "base constructor is called "<< endl;
    }
    base(int z):x(z){
        cout << "derived has called the base class parameterized constructor with the base x value 5 "<< endl;
    }

    virtual void fun();
};



class derived : public base {
public:

    int x;

    derived(int x=5):base (x){
        cout << "derived constructor called "<< endl;
        x=9;
        cout << "derived constructor has assigned the derived x value to 9" << endl;
    }

    void fun() override;
};


int main() {
    base *p = new derived;
    p->fun();
    cout << "IN MAIN DERIVED X = "<<p->x << endl; // will show base class data mem x
    

    return 0;
}


void base::fun() {
    cout << "BASE FUN " << x << endl;
}

void derived::fun() {
    cout << "DERIVED FUN DERIVED X= " << x << endl;
    cout << "IN DERIVED FUN BASE X= " << base::x << endl;
}

