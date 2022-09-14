#include <iostream>
using namespace std;

class base
{
public:
    int x;
    void sbx (void){
        cout<< "base x = "<<x<<endl;
    }
    virtual void atm (void){
        x=x-10;
    }
};

class derived : public base
{
    void atm (void){
        base::x = base::x - 3;
    }
};

int main (){
    base *p = new derived;
    p->x =125;
    p->sbx();
    p->atm();
    p->sbx();
    p->base::atm();
    p->sbx();

}
