#include <iostream>
using namespace std;

class userdetails{
    protected:
    string name;
    long int phone;
    string address;
    double employee_id;


    public:
    void get_details_mutator();
    void print_details_accessor();

};
userdetails object1[100];


class manager:public userdetails{
    protected :
    int n;
    public:
    void get_n_mutator();
    void managernumber(int  n);
    void display_manager(int p);

};
manager object[100];


void manager::get_n_mutator(){
    cout << "Enter total number of managers you want to add " ; cin >> n;
    for(int i = 0 ; i <46 ; i++){
        cout << "-" ;

    } 
    cout << endl;
}

void userdetails::get_details_mutator(){
    cout << "Enter Name of Manager " ; cin >> name; 
    cout << "Enter Phone Number " ; cin >> phone ; 
    cout << "Enter state " ; cin >> address ;
    cout << "Enter Mangers ID number  " ; cin >> employee_id ;
};

void userdetails::print_details_accessor(){
    cout << "Name : " << name << endl;
    cout << "Phone number : " << phone << endl;
    cout << "State : " << address << endl;
    cout << "Manager ID : " << employee_id << endl;

};

void  manager::managernumber(int n ){

    // cout << "\tManager" << n << endl;
        object1[n].get_details_mutator();
        for(int i = 0 ; i <46 ; i++){
        cout << "-" ;
        }
        cout << endl;
        
    
    // for (int i = 1 ; i<=n ; i++){
    //     cout << "\tManager" << i << endl;
    //     object2.get_details_mutator();
    //     for(int i = 0 ; i <46 ; i++){
    //     cout << "-" ;

    // } 
    // cout << endl;
        
    // }



};

void manager::display_manager(int p){
    // for(int i = 0 ; i <46 ; i++){
    //     cout << "-=" ;

    // } 
    // cout << endl;

    // for(int i = 1 ; i <= n ; i++){
    //     cout << "Manager" << i << " Details" << endl;
    //      for(int i = 0 ; i <46 ; i++){
    //     cout << "-" ;

    // } 
    // cout << endl;
        object1[p].print_details_accessor();
         for(int i = 0 ; i <46 ; i++){
        cout << "-" ;

    } 
    cout << endl;

    


    
}
int main(){

    // manager object[100];
    int n;

    cout << "Enter total number of managers : " ;
    cin >> n;

    for(int i = 0 ; i<n ; i++){

    cout << "Enter Manager" << i+1 << " details" << endl;
    for(int i = 0 ; i<46 ; i++){
        cout << "-";
    }
    cout << endl;
    object[i].managernumber(i);
    // object[i].display_manager(i);

    }

    for(int i = 0 ; i<46 ; i++){
        cout << "-";
    }
    cout << endl;

    for (int i= 0 ; i<n ; i++){
        cout << "Manager" << i+1 << " Details" << endl;

                
        object[i].display_manager(i);
    }
    return 0;

    
    
}