

#include <iostream>
using namespace std;
#include "extras.h"

class triplets{
    protected:
    int n , array[100] , need = 0 , element1 , element2 ,  element3;
    public:
    void details_mutator();
    void details_manager();
    void details_accessor();
    void details_accessor1(){
        cout << "HI "<< endl;
    }
};

void triplets::details_mutator(){
    cout << "Enter the number of Elements in you array | " ; cin >> n ;
    lines();
    cout << "Enter " << n << " Values" << endl;
    for(int  i = 0 ; i < n ; i++){
        cin >> array[i];
    }
    lines();

    
}


void triplets::details_accessor(){
    cout << "{ " << element1 << " " << element2 << " " << element3 << " }" << endl;
}



void triplets::details_manager(){
    for(int i = 0 ; i < n ; i++){
        element1= array[i];
        for(int k = i+1; k < n ; k++){
            element2 = array[k];
            for(int j = k+1 ; j< n ; j++){
                element3 = array[j];
                if(element1+ element2 + element3 == 0){
                    details_accessor();
                    exit;
                }

            }

        }

    }
    
}

class triplets1:public triplets{
    public:
    void access_base();
    
};

void triplets1::access_base(){
    triplets a;
    a.details_mutator();
    a.details_manager();
    lines();
    a.details_accessor1();

}

int main(){
    triplets1 b;
    b.access_base();
    
    return 0;
    
    
};
