#include <iostream>
using namespace std;

class ACCOUNT {
    public :
    long int account_no;
    string type;
    long int balance;

    float deposit(long int amount){
        balance += amount ;
        return balance ;
    }

    float withdrawl(long int amount){
        balance -= amount ;
        return balance;
    }

};

int main(){
    ACCOUNT user1;
    cout << " CHOOSE AS PER YOUR REQUIREMENTS " << endl;     
    cout << " 1 . Create New Account " << endl;
    cout << " 2 . Withdrawl or Deposite in existing account " << endl;
    cout << " ----------------- " << endl;
    cout << " >> ";

    int a,b ;
    long int amounta ;

    cin>> a ;
    
    if (a==1){
        cout << " PLEASE ENTER THE DETAILS TO CREATE THE NEW ACCOUNT " << endl;
        cout << " ---------------- " << endl;
        cout << " ENTER PHONE NUMBER " << endl;
        cout << " >> " ;
        cin >> user1.account_no ;
        cout << " ENTER ACCOUNT TYPE ( SAVINGS OR CURRENT ) " << endl;
        cout << " >> ";
        cin >> user1.type ;
        cout << " ENTER THE BALANCE YOU WNATED TO DEPOSITE " << endl;
        cout << " >> " ;
        cin >> user1.balance; 
        cout << " -------------- " << endl;
        cout << " THANKS FOR VISITING " << endl;
        cout << " ---------------- " << endl;
        cout << " YOUR ACCOUNT IS CREATED WITH THE DETAILS PLEASE CROSS CHECK THEM " << endl;
        cout << " PHONE NUMBER >> " << user1.account_no << endl << " ACCOUNT TYPE >> " << user1.type << endl << " BALANCE >>  " << user1.balance << endl;


    }
    else if (a==2){
        cout << " You want to Withdrawl or Deposit " << endl;
        cout << " 1 . Withdrawl " << endl << " 2 . Despoit " << endl << " ------------ " << endl << " >> " ;
        cin >> b;
        cout << " --------------- " << endl;
        if(b==1){
            cout << " PLEASE ENTER YOUT PREVIOUS BALANCE " <<endl << " >> " ;
            cin >> user1.balance ;
            cout << " --------------- " << endl;
            cout << " ENTER THE AMOUNT YOU WANT TO WITHDRAWL " << endl << " >> " ;
            cin >> amounta;
            cout << " ____________ " << endl << " AMOUNT "<< amounta << " WIDRAWLED SUCCESFULLY " << endl;
            cout << " Your Current Balance is " << user1.withdrawl(amounta);

        }
        else if(b==2){
            cout << " PLEASE ENTER YOUT PREVIOUS BALANCE " <<endl << " >> " ;
            cin >> user1.balance ;
            cout << " --------------- " << endl;
            cout << " ENTER THE AMOUNT YOU WANT TO DEPOSIT" << endl << " >> " ;
            cin >> amounta;
            cout << " ____________ " << endl << " AMOUNT " << amounta << " DEPOSITTED  SUCCESFULLY " << endl;
            cout << " Your Current Balance is " << user1.deposit(amounta);

        }
    }


}