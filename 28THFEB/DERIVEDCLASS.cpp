#include <iostream>
using namespace std ;

/* HERE DERIVED CLASS , FRIEND CLASS EXAMPLE IS WRITTEN*/
class aashish{   // THIS IS A BASE CALSS NAMED ASHISH ----> FOR THIS BASE CLASS WE WILL CREATE A CHILD CLASS AND A FRIEND CLASS 
    int z;
    protected:
    int a ;
    public:
    int c;
    void s_details(void );

    friend class anime; // Declaration of a  friend class named anime --- > now this anime can access the pritected and the private members of the base class but the child class cannot do suich things

};

class anime{ //This is the defination of a friend class 
// Point to remenber --- > we can declare and define the friend classat the same scope we need to declare the friend class inside and define it outside the base class 

    public:
    void access_private(aashish& ref); // We cant acccess the menbers of a base class directly , we can access the privet , protected members with the help of a reference 

};


void anime::access_private(aashish& ref){// Defination of a function which is declared in a friend class named anime
     for (int i = 0 ; i < 46 ; i++){
        cout << "-";
    }
    cout << endl;   
    cout << "Enter details for private integer " ; cin >> ref.z ; cout << ref.z << endl;
    cout << "Enter detials for pritected integer " ; cin >> ref.a; cout << ref.a << endl;
    cout << "Enter details for public integer " ; cin >> ref.c; cout << ref.c << endl; 
}




class ashish1:public aashish{ // This is a child class  
// Point to be noted ---- > the child class declaration and defination can be dont at the same scope easily;
    public:
    void set_details(void );


};

void aashish::s_details(void){
     for (int i = 0 ; i < 46 ; i++){
        cout << "-";
    }
    cout << endl;

    cout << "Accessing protected integer with the help of function of a base class " << endl;
    cin >> a;
    cout << a << endl;
}

void ashish1::set_details(void){
     for (int i = 0 ; i < 46 ; i++){
        cout << "-";
    }
    cout << endl;

    cout << "Accessing the protected integer with the help of function in a child class  " << endl;
    cin >> a;
    cout << a << endl;

}

int  main(){
    aashish aa;
    aa.s_details();
    ashish1 aaa;
    aaa.set_details();

    anime aaaa;
    aaaa.access_private(aa);



    return 0;
}