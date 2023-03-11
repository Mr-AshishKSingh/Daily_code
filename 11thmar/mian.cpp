// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

#include <iostream>
using namespace std;
#include "extras.h"
class ashish{
    private:
    int n ;
    int array1[100], array2[100] , array3[100] , found;
    public:
    void mutator();
    void manager();
    void accessor();

};

void ashish::mutator(){
    cout << "Enter number of elements? =  " ; cin >> n;
    lines();
    cout << "Enter "  << " Values"  << endl;
    for(int i = 0 ; i < n-1 ; i++){
        cin >> array1[i];
    }
}

void ashish::manager(){
    for(int i =0 ; i < n ; i++){
        array2[i] = i+1;
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n ; j++){
            if(array1[i] == array2[j]){
                array3[j] = array1[i];
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(array2[i] != array3[i]){
            found = array2[i];
            break;

        }
    }
}
void ashish::accessor(){
    lines();
    cout << "Values you entered " << endl;
    for(int i = 0 ; i < n-1 ; i++){
        cout << array1[i]  << " ";
    }
    cout << endl;
    lines();
    cout << "Values after check" << endl;
    for(int i = 0 ; i < n ; i++){
        cout << array3[i] << " ";
    }
    lines();
    cout << "Missing value is = " << found << endl;
}

int main(){
    ashish b;
    b.mutator();
    b.manager();
    b.accessor();
    return 0;

}