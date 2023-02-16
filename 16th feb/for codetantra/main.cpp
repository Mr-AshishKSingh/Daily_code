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
    
    private:
    int n , array[10] , min , max , i;

};

int chk::disp_min(){
    
    return min;
};

int chk::disp_max(){
    
    return max;
};



int chk::enter_numbers(){
    cout << "Enter " << n << " Values : " ;
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
    
    for(i=0 ; i<n ; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    

    return 0;
};

int chk::chk_max(){
    max=array[0];
    
    for(i=0 ; i<n ; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    
    return 0;
};

int main(){
    chk aa;
    int x,y , z;
    cout << "Enter n : " ;
    cin >> x;
    aa.get_n(x);
    aa.enter_numbers();
    
    aa.chk_min();
    aa.chk_max();
    
    
    z=aa.disp_max();
    cout << "Largest element = " << z << endl;
    y=aa.disp_min();
    cout << "Smallest element =  " << y << endl;
    
    
    
    
   
    return 0;
}