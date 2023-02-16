#include <iostream>
using namespace std;

class chk{
    public:
    int get_n();   
    int chk_min();
    int chk_max();
    private:
    int n , array[10] , min , max , i;

};

int chk::get_n(){
    cin >> n;
    return 0;
};

int chk::chk_min(){
    min = array[0];
    for(i=0 ; i<n ; i++){
        if(min > array[i]){
            min = array[i];
        }
    }

    return min;
};

int chk::chk_max(){
    max=array[0];
    for(i=0 ; i<n ; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    return max;
};

int main(){
    cout << "Enter n " << endl;
   
    return 0;
}