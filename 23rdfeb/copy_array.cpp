#include <iostream>
using namespace std;

class ashish{
    private:
    int n , array1[100] , array2[100] , i;
    public:
    ashish(int a){
        n=a;
        i=0;       
    };

    void getvalues(int n){
        cout << " ENTER VALUES OF ARRAY1 " << endl;
        for(i=0 ; i<n ; i++ ) {
            cin >> array1[i] ;
        }
    };

    void copy_values(int n){
        for(i=0 ; i<n ; i++){
            array2[i] = array1[i];
        }
    };

    void print_values(int n){
        for(i=0 ; i<n ; i++){
            cout << "value " << i+1 << " in array1 is " << " = " << array1[i] << endl; 
        }        
        cout << " ----------------- " << endl;
        for(i=0 ; i<n ; i++){
            cout << "value " << i+1 << " in array2 is " << " = " << array2[i] << endl; 
        }
    }
};


int main (){
    int p ; 
    cout << " NUMBER OF ELEMENTS IN YOUR ARRAY IS " ;
    cin >> p;
    ashish object1(p);
    cout << "ENTER VALUES FOR ARRAY 1" << endl;
    object1.getvalues(p);
    object1.copy_values(p);
    object1.print_values(p);

    return 0;
}