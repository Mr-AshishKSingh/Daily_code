#include <iostream>
using namespace std;

class parent{
    public:
    int get_number(void);
    

    protected:
    int number;
};

class derived:public parent{
    public:
    int print_number(){
        cout << number;
        return number;
    }
};

int parent::get_number(){
    cout << " PLEASE ENTER NUMBER " << endl;
    cin >> number;
    
    return 0 ;
};

int main(){
    derived a;
    parent b;
    int x;
    b.get_number();
    cout << a.print_number() << endl;
    x=a.print_number();
    cout << x;
    return 0;
    
}