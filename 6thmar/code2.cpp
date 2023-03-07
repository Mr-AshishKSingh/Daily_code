/* Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.*/


#include <iostream>
using namespace std;
#include "extras.h"

class solution{
    private:
    int n ; int array[100] , sum , element1 , element2;
    int targetmatch;
    public:
    void basics();
    void get_array();
    void perform_calculations();
    void pri_details();
};

void solution::pri_details(){

  
    
    cout << "Target Match = "<<targetmatch << endl;
    cout << "Element 1 = " << element1 << endl;
    cout << "Element 2 = " << element2 << endl;
    lines();
    cout << "Actual  array = : " ;
    for(int i = 0 ; i < n ; i++){
        cout << array[i] << " " ; 
    }

    cout <<"Subarray is = { " << element1 << " " << element2 << " }" << endl;  
    
}

void solution::basics(){
    cout << "Enter number of elements in your array : " ;
    cin >> n;

}

void solution::get_array(){
    lines();
    cout << "Enter " << n << " Values" << endl;
    lines();
    for(int i = 0 ; i < n ; i++){
        cin >> array[i];
    }

    
};
void solution::perform_calculations(){
    
    lines();
    cout << "Enter the sum you want to check: " ; cin >> sum;
    lines();
    // for(int i = 0 ; i<n ; i++){
    //     element1 = array[i] ;
    //     targetmatch = array[i];
    //     while(targetmatch != sum){
    //     for(int j = i+1 ; j<n ; j++)
    //     {
    //         element2 = array[j];
    //         targetmatch  = targetmatch + array[j];


    //     }
    //     break;
    //     }

    // };


    for(int i = 0 ; i < n ; i++){
        element1 = array[i];
        targetmatch = array[i];

        for(int j = i+1 ; j < n ; j++){
            element2 = array[j];
            targetmatch = targetmatch + array[j];
            if(targetmatch == sum ){
                pri_details();
                exit;
                
                
            }
            

        }
    
    }
    

    // cout << "Target Match = "<<targetmatch << endl;
    // cout << "Element 1 = " << element1 << endl;
    // cout << "Element 2 = " << element2 << endl;
    


}

int main(){
    solution o; 
    o.basics();o.get_array();
    o.perform_calculations();
    
    return 0;
}

