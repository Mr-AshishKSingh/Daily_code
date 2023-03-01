#include <iostream>
using namespace std;

class ashish{
    protected:
    int a[100] , b[100] , c[100], n , largest , smallest ;

    public:
    void get_number_of_values(void);
    void get_actual_values(void);
    void sort_values(void);
    void disp_values(void);

};


class ashish1:public ashish{

};

void ashish::get_number_of_values(void){
    cout << "Enter number of elements" ; cin >> n;
    for(int i = 0 ; i<46 ; i++){
        cout << "-"; 
    }
    cout << endl;

};

void ashish::get_actual_values(void){
    cout << "Enter " << n << " Values" << endl;
     for(int i = 0 ; i<n  ; i++){
        a[i] = 0 ;
    }



    for (int i = 0 ; i<n ; i++){
        cin >> a[i];
    }
      for(int i = 0 ; i<n  ; i++){
        b[i] = a[i] ;
        c[i] = a[i];
    }

    for(int i = 0 ; i<46 ; i++){
        cout << "-"; 
    }
    cout << endl;
}

void ashish ::sort_values(void){
    largest = a[0];
    smallest  = a[0];
    for(int i = 0 ; i<n ; i++){
        if(largest < a[i]){
            largest = a[i];
            
            
        }
        
    }


    
      for(int i = 0 ; i<n ; i++){
        if(smallest > a[i]){
            smallest = a[i];
           
        }
    }

    for(int i =0 ; i<n ; i++){
        if(largest == c[i]){
            c[i] = c[i] - c[i];
        }
    }


    for(int i =0 ; i<n ; i++){
        if(smallest == c[i]){
            c[i] = c[i] - c[i];
        }
    }

   

};

void ashish::disp_values(void){
    for(int i = 0 ; i<46 ; i++){
        cout << "-"; 
    }
    cout << endl;

    cout << "Sorted Values are " << endl;
    for(int i = 0 ; i<46 ; i++){
        cout << "-"; 
    }
    cout << endl;


    for (int i = 0 ; i< n ; i++){
        if(i==0){
            b[i] = smallest;

        }
        else if(i==n-1){
            b[n-1] = largest;
        }
    }
    cout << "Array 1 = "; 
    for (int i = 0 ; i<n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array 2 = ";
        for (int i = 0 ; i<n ; i++){
        cout << b[i]  << " ";
    }
    cout << endl;
     cout << "Array 3 = ";
        for (int i = 0 ; i<n ; i++){
        cout << c[i]  << " ";
    }
   

    cout << endl;
    cout << "Smallest Value is  = " << smallest << endl << "Largest Value is = " << largest << endl;
}
int main(){
    ashish1 aaaa;
    aaaa.get_number_of_values();
    aaaa.get_actual_values();
    aaaa.sort_values();
    aaaa.disp_values();
    return 0;
}