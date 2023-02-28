#include <iostream>
using namespace std;


class ashish{   
    private:
    class ashish1{
        private:
        string name;
        string fathersname;

        public:
        void dispdetails(void);
        void set_details(void);
    };

    public:
    void create_obj(void);
    void access_obj(void );


    
};

void ashish::access_obj(void){
    ashish::ashish1 student1;
    student1.set_details();
    student1.dispdetails();
}

void ashish::create_obj(void){
    ashish::ashish1 student1;
}

void ashish::ashish1::dispdetails(void ){
     for (int i = 0 ; i < 46 ; i++){
        cout << "-";
    }
    cout <<  endl;
    cout << "Name is " << name << endl << "Fathers name is " << fathersname << endl;

};

void ashish::ashish1::set_details(void){
    cout << "Enter students name " << endl;
    getline(cin , name);
    cout << "Enter fathers name "  << endl ; getline(cin , fathersname);


};
int main (){
    for (int i = 0 ; i < 46 ; i++){
        cout << "-";
    }
    cout <<  endl;

    ashish access;
    access.create_obj();
    access.access_obj();

    
    
    
    return 0;
}