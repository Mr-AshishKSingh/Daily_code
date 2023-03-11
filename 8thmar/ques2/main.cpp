// Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.
#include <iostream>
using namespace std;
#include "lines.h"

class ashish{
    private:
    int array[100] , n , first_occurance , last_occurance , target;
    public:
    void mutator();
    void manager();
    void accessor();
};

void ashish::mutator(){
    lines();
    cout << "Enter number of elements " ; cin >>n ;
    lines();
    cout << "Enter " << n << " Values" << endl;
    for(int i = 0 ; i< n ; i++){
        cin >> array[i];
   }
    lines();
    cout << "Value whose occurance you want to check? " ; cin >> target;
    lines();
    manager();
};

void ashish::manager(){
    for(int i = 0 ; i<n ; i++){
        if(array[i] == target){
            first_occurance  = i;
             for(int k = i ; k < n ; k++){
            if(array[k] == target){
                last_occurance = k; 
            }

            
            
        }

        break;
        };
        
        
    }
    accessor();
    



}
void ashish::accessor(){
    cout << "First Occurance at index number = " << first_occurance << endl;
    cout << "Last occurance at index number = " << last_occurance << endl;

}

int main(){
    ashish o;
    o.mutator();
  
    return 0;
}