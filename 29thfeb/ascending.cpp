#include <iostream>
using namespace std;

class ashish{
    protected:
    int n;
    int array[100];
    int array1[100];

    public:
    void get_values(void);
    void sort_values(void);
    

};


class ashish1:public ashish{
    public:
    void print_values(void);

};


void ashish1::print_values(void){
    cout << "Sorted Values are " << endl;
    for (int i = 0 ; i<46 ; i++){
        cout << "-" ;
    }
    cout << endl;
    for(int i = 0 ; i<n ; i++){
        cout << array1[i] << " " ;

    }
}

void ashish::get_values(void){
    cout << "Enter number of integers " ; cin >> n ;
    cout << "Enter " << n << " Integers"  << endl;
    for(int i = 0 ; i<n ; i++){
        cin >> array[i] ;
    }
};


void ashish::sort_values(void){
    for(int i =0 ; i<n ; i++){
        array1[i] = array[i];
    }
    for (int i = 0 ; i< n ; i++){
        for (int j = 0  ; j< n ; j++){
            if (array1[i] > array[j]){
                for(int m = 0 ; m<n ; m++){
                    if(array[j] == array1[m]){
                        array1[m] = array1[i];
                        array1[i] = array[j];
                    }
                }
                continue;
                
            };
        }
    }
};


int main(){
    ashish1  aa;
    aa.get_values();
    aa.sort_values();
    aa.print_values();
    return 0;
}