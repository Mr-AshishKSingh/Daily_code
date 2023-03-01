#include <iostream>
using namespace std;

class base{
    protected:
    double roll_number;
    double phone_number;

    public:
    void mutator(void);

};

class derived:private base{

    public:
    void accessor(void);


};


void derived::accessor(void){
    derived aa;
    aa.mutator();

}

void base::mutator(void){
    cout << "ENTER ROLLNUMBER " ;
    cin >> roll_number ;
    cout << "Enter phone number" ;
    cin >> phone_number ;
    cout << roll_number << endl;
    cout << phone_number << endl;
    for (int i = 0 ; i<46 ; i++){
        cout <<"-";
    }
    cout << endl;
}

int main(){
    base a;
    a.mutator();
    derived b;
    b.accessor();
    
    return 0;
}