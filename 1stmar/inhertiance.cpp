#include <iostream>
using namespace std;

class base{
    protected:
    double roll_number;
    string name ;

    public:
    void mutator(void);

};

class derived:public base{

};

void base::mutator(void){
    cout << "ENTER ROLLNUMBER" ;
    cin >> roll_number ;
    cout << "Enter name" << endl;
    getline(cin , name );       // why this getline function is not working 
    cout << roll_number << endl;
    cout << name << endl;
    for (int i = 0 ; i<46 ; i++){
        cout <<"-";
    }
    cout << endl;
}

int main(){
    base a;
    a.mutator();
    derived aa;
    aa.mutator();
    return 0;
}