#include <iostream>
using namespace std;

class reverse{
    public:
    void getnumber(int a);
    int rev(int n);
    private: 
    int a ;

};

void reverse::getnumber(int a ){
    int n ;
    n=a;
};

int reverse::rev(int n){
    int r=0 ,b;
    while(n!=0){
        b=n%10;
        r=r*10+b;
        n=n/10;
    }
    return r;
};

int main(){
    int x;
    reverse d;

    x=d.rev(785);
    cout << x;
    return 0;
}