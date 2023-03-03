#include <iostream>
using namespace std;



int main(){

string registered_name="";
                    string entered_name = "";
                    string mobileno = "";
                    bool is_registered = false;

                    cout << "Please enter your name: ";
                    cin >> entered_name;

                   
if (entered_name == registered_name)
                    {
                        is_registered = true;
                    }

                    if (!is_registered)
                    {
                        registered_name = entered_name;
                        cout << "Enter your phone number: ";
                        cin >> mobileno;
                    }
                    else
                    {
                        cout << "You are already a registered member." << endl;
                    } }