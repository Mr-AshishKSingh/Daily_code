#include <iostream>
using namespace std;
#include "extras.h"

class ashish{
    private:
    int n;
    int array1[100] , no_of_subarrays , sum = 0;
    public:
    void mutator();
    void manager();
    void accessor();
};


void ashish::mutator(){
    cout << "Enter number of elements = " ; cin >> n;
    lines();
    cout << "Enter Values " << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> array1[i];
    }
    lines();
    


}

void ashish::manager(){
    no_of_subarrays = n*(n+1) / 2;
    int array2[no_of_subarrays];
    for(int i = 0 ; i< n ; i++){
        for(int j = i ; j < n ; j++){
            for(int k = j ; k < no_of_subarrays ; k++){
                sum = sum +j;
                array2[k] = sum;
                break;
            }

            
            

        }
    }

    cout << no_of_subarrays << endl;;
    for(int i = 0 ; i < n ; i++){
        cout << array2[i] << " ";
    }


}




int main(){
    ashish a;
    a.mutator();
    a.manager();
    return 0;
}


