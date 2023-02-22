#include <iostream>
using namespace std;

int main(){
    int i , array[20] ;
    for(i=0 ; i<20 ; i++){
        cin >> array[i];
    };

    int search , found ;
    for (i=0 ; i<20 ; i++){
        if(array[i] == search ){
            found = array[i];
        }
    };

    cout << found << endl;
    return 0;

}