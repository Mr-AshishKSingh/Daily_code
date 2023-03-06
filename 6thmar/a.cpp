/* Given an array A of positive integers. Your task is to find the leaders in the array. 
An element of array is leader if it is greater than or equal to all the elements to its right side.
 The rightmost element is always a leader.   */


#include <iostream>
using namespace std;
#include "extras.h"

class arraya{
    private:
    int array[100];
    int n;
    int leader1 , leader2 ;
    public:
    void mutator();
    int accessor();
    void cacl();
    
};

void arraya::mutator(){
    lines();
    cout <<"Enter number of elements is ur arraay : " ; cin >> n;
    cout << "Enter " << n << " Values" << endl;
    lines();
    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }
    lines();

}

void arraya::cacl(){
    for(int i = 0 ; i < n ; i++){
        leader1 = max(array[0] , array[i]);
    }
    leader2 = array[n-1];
}


int arraya::accessor(){
    cout << leader1 ; 
    cout << endl;
    cout << leader2;
}

int main(){
    arraya o;
    o.mutator();
    o.cacl();
    o.accessor();
    return 0;
}