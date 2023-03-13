#include <iostream>
#include <string>
using namespace std;


class ASHISH {
    public:
    string first_name;
    string last_name;
    string middle_name;

    string full_name();
    string get_first(string a);
    string get_middle(string b);
    string get_last(string c);


};

string ASHISH::full_name(){
    cout << first_name << " " << last_name << " " << middle_name << endl;
     
};

string ASHISH::get_first(string a){
    return first_name = a;
    
};

string ASHISH::get_middle(string b){
    return middle_name  = b;
   
};

string ASHISH::get_last(string c){
    return last_name = c;
   

};

int main() {
    ASHISH user1;
    string a ,b,c;
    cout << "ENTER FIRST NAME : " ;
    cin >> a;
    cout << " ENTER MIDDLE NAME  : " ;
    cin >> b;
    cout << " ENTER LAST NAME " ;
    cin >> c;

    user1.get_first(a);
    user1.get_middle(b);
    user1.get_last(c);
    user1.full_name();
    return 0;

}

