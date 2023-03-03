#include <iostream>
using namespace std;


class ashish{
    private:
    int a ;

    public :
    ashish(){
        a=0;
        cout << "Object named " << "created "  << endl;

    }
    ~ashish(ashish& aa)
};