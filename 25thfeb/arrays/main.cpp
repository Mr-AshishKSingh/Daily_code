#include <iostream>
using namespace std;


int main(){
    int array[2] , array2[2] = { 1 , 2};
    array[1] = array2[1];
    cout << array[1];
    return 0;
}