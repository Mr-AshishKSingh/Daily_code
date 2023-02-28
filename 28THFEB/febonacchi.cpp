// Printing fibo series with the help of classes and objects , constructors 

#include <iostream>
using namespace std;

class ashish{
    private :
    int n ;

    public:

    ashish(){
        n= 0;
    }
    int seriess(int n);
    friend class ashish1;
};

int ashish::seriess(int n){
    if( n==0){
        return 0 ;
    }
    else if( n == 1 ){
        return 1 ;
    }
    else {
        return seriess(n-2 ) + seriess(n-1);
    }
}

class ashish1{
    public:
    void mutator(ashish& ref);
    void accessor(ashish& ref);
};

void ashish1::mutator(ashish& ref){
    cout << "Enter number " << endl;
    cin >> ref.n ;
   

};


void ashish1::accessor(ashish& ref){
    for (int i =0 ; i<=ref.n ; i++){

   cout <<  ref.seriess(i) << " " ;
}



}


int main() {
    ashish aa;

    ashish1 object1;
    object1.mutator(aa);
    object1.accessor(aa);
    return 0;

}



