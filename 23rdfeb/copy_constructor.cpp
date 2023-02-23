#include <iostream>
using namespace std;

class student{
    private: 
    int roll_number;
    string stu_name;

    public:

    void set_values(int p , string q){
        roll_number = p;
        stu_name = q;
    }
    student(){
        roll_number = 0;
        stu_name = "s";
    };

    student(student& aa){
        roll_number = aa.roll_number;
        stu_name = aa.stu_name;

    };

    void display (student reference ){
        cout << " ROLL NUMBER IS " << reference.roll_number << endl;
        cout << " NAME IS  " << reference.stu_name << endl;
 
    }
};

int main(){
    int x ;
    string y;
    cout << " ENTER ROLL NUMBER PLEASE" ;
    cin >> x;
    cout << " ENTER NAME PLEASE " ;
    cin >> y;

    student object1;
    object1.set_values(x  ,y );
    student object2 = object1 ; // copying object1 details to object2 
    student object3(object2);  // another way of copying object details 
    object1.display(object1);
    object2.display(object2);
    object3.display(object3);
    
    return 0;
    


}