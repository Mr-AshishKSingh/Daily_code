#include <iostream>
using namespace std;

class chk{
    public:
    int get_n(int a);   
    int enter_numbers();
    int chk_min();
    int chk_max();
    int disp_min();
    int disp_max();
    int chk_array();
    private:
    int n , array[10] , min , max , i;

};

int chk::disp_min(){
    
    return min;
};

int chk::disp_max(){
    
    return max;
};

int chk::chk_array(){
    for(i=0 ; i<n ;i++){
        cout << "Value " << i+1  << " is " << array[i] << endl;
    }
    return 0;
    
};

int chk::enter_numbers(){
    cout << "Enter " << n << " numbers" ;
    for(i=0 ; i<n ; i++){
        cin >> array[i];
    }
    return 0;
};

int chk::get_n(int a){
    n=a;
    return n;
};

int chk::chk_min(){
    min = array[0];
    cout << " Value in min is " << min << endl;
    for(i=0 ; i<n ; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    cout << "New value in min is " << min << endl;

    return 0;
};

int chk::chk_max(){
    max=array[0];
    cout << "Value in max is" << max << endl;
    for(i=0 ; i<n ; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    cout << "New Value in Max is " << max << endl;
    return 0;
};

int main(){
    chk aa;
    int x,y , z;
    cout << "Enter n " << endl;
    cin >> x;
    aa.get_n(x);
    aa.enter_numbers();
    aa.chk_array();
    aa.chk_min();
    aa.chk_max();
    y=aa.disp_min();
    cout << "Minimum number is " << y << endl;
    z=aa.disp_max();
    cout << "Maximum number is " << z << endl;
    
    
    
    
   
    return 0;
}