#include <iostream>
using namespace std;

class ashish{
    private:
    int a;
    int b;

    public:
    ashish(){
        a=1;
        b=2;
    }
    friend int desp(ashish& refere);

};
class dipti{
    private:
    int private_varaibale_of_dipti;
    protected:
    int protected_variable_of_dipti;

    public:
    friend int desp(dipti& refere);
};

int desp(dipti& refere){
    cin >> refere.private_varaibale_of_dipti;
    cin >> refere.protected_variable_of_dipti;
    cout << refere.private_varaibale_of_dipti;
    cout << endl;
    cout << refere.protected_variable_of_dipti << endl;
}

int desp(ashish& refere){  
    cin >> refere.b;
    cin >> refere.a;
    cout << refere.b;
    cout << endl;
    cout << refere.a;


}
int main(){
    ashish object1;
    dipti object2;
    desp(object1);
    desp(object2);



}