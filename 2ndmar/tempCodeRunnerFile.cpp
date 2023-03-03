#include <iostream>
using namespace std;


class ashish{
    protected:
    int a[100];
    int n;
    int target;
    public:
    void get_values(void);
    void perform_calc();

};

class ashish1:public ashish{

};

void ashish::get_values(void){
    cout << "Number of intgers you have ? : " ; cin >> n;
    for(int i = 0 ; i< 46 ; i++){
        cout << "-" ;
    }
    cout << endl;
    cout << "Enter " << n << " Integers" << endl;
    for (int i = 0; i<n ;  i++){
        cin >> a[i];
    };
    for(int i = 0 ; i< 46 ; i++){
        cout << "-" ;
    }
    cout << endl;
    cout << "Enter the target value " ; cin >> target ;
     for(int i = 0 ; i< 46 ; i++){
        cout << "-" ;
    }
    cout << endl;

    

};

void ashish::perform_calc(){
    for (int i = 0 ; i<n ; i++){
        for (int j = 1 ; j<n ; j++){
            if(a[i] + a[j] == target){
                cout << "[" << i << " " << j << " ]" << endl;
                

            }
            
            
        }
        
    }

};

int main(){
    ashish1 object1;
    object1.get_values();
    object1.perform_calc();
    return 0;

}