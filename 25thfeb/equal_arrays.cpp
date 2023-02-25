#include <iostream>
using namespace std;

class ashish{
    private:
    float a1[100] , a2[100] , a3[100] ;
    int outcome = 1;

    public:
    void enter_array1(int n);
    void enter_array2(int n);
    void assign_array3();
    void compare(int n);
    void chk_array3(int n);
    void display_out();

};

void ashish::enter_array1(int n){
    cout << " ENTER VALUES OF ARRAY 1 " << endl;
    for(int i=0 ; i<n ; i++){
        cin >> a1[i];
    };
    cout << " _____________________ " << endl;
};

void ashish::enter_array2(int n){
    cout << "ENTER VALUES OF ARRAY 2" << endl;
    for(int i=0 ; i<n ; i++){
        cin >> a2[i];
    };
    cout << "____________________" << endl;
};

void ashish::assign_array3(){
    for(int i = 0 ; i<10 ; i++){
        a3[i] = 0;
    };
};

void ashish::compare(int n){
    for(int i = 0 ; i< n ; i++){
        for (int  j = 0; j < n; j++)
        {
            if(a1[i] == a2[j]){
                a3[i] = 1 ;
            };
        };
        
    };

};

void ashish::chk_array3(int n){
    for(int i =0 ; i <n ; i++){
        if(a3[i] == 0){
            outcome = 0;
        }
        
}
}

void ashish::display_out(){
    cout << outcome << endl;

}

int main(){
    int n;
    ashish aal;
    cout << "Number of Elements : " ;
    cin >> n ;
    cout << "-----------------" << endl;
    aal.enter_array1(n);
    aal.enter_array2(n);
    aal.assign_array3();
    aal.compare(n);
    aal.chk_array3(n);
    aal.display_out();
    return 0;

}