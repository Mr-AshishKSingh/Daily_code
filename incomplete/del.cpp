// Code to delete an element from an array and shist the incomming values to its place 

#include <iostream>
using namespace std;

class ashish{
    public:
    int a[100] , target ;
    void get_array(int n );

};

class ashish1:public ashish{
    public:
    void access_base(int n);
};

void ashish::get_array(int n ){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}

void ashish1::access_base(int n ){
    get_array(n);
    cout << "Enter the value u wnat to delete from an array : " ; cin >> target;
    if()

}

int main(){
    ashish1 o;
    int n ;
    cin >> n;
    o.access_base(n);
}
