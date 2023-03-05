// writing code to arrange the integers in ascending ( in an array )

#include <iostream>
using namespace std;

class ashish{
    protected:
    int n , array1[100] , array2[100] , min , max; 
    public:
    void get_arary1(int n);
    void sort_it(int n);
    void print_sorted(int n);
    
};

class ashish1:public ashish{
    public:
    void access_baseclass(int n);


};

void ashish::print_sorted(int n){
    for (int i = 0 ; i<n ; i++){
        cout << array2[i] << " " ;
    }
}

void ashish::get_arary1(int n){
    for(int i = 0 ; i< n ; i++){
        cin >> array1[i] ;
    }
}

void ashish::sort_it(int n ){
    min = array1[0];
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if(min > array1[j]){
                min=array1[j];
                for(int m = j ;m<n ; m++){
                    array1[m]  = array1[m+1];

                }

                array2[i] = min ;
            }
        }
    }

}



void ashish1::access_baseclass(int n){
    get_arary1(n);
    sort_it(n);
    print_sorted(n);


}

int main(){
    int n ;
    cout << "Nmber of elements in your array: " ; cin >> n ;
    for(int i =  0  ; i< 46 ; i++){
        cout << "-" ;
    }
    cout << endl;
    ashish1 object1;
    object1.access_baseclass(n);
    return 0;

}