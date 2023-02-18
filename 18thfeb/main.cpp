/// function overloading 


#include <iostream>
using namespace std;
#include "add.h"

int main(){
    int a ,b;
    float c,d;
    char x,y;

    cout << "Enter two Integer values : " ;
    cin >> a  >> b;
    cout << "Enter two flaot values : ";
    cin >> c >> d;
    cout << "Enter two characters : ";
    cin >> x >> y;

    cout << "Addition of integer values is " << add(a,b) << endl;
    cout << "Addition of float values is " << add(c,d) << endl;
    cout << "Addition of char values is " << add(x,y) << endl;
    return 0;
}
