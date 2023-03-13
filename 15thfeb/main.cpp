#include <iostream>
using namespace std;

class resistivity{
    public:
    long int insulator();
    long int semiconductor();
    long int conductors();

    protected:
    float from_insulator ;
    float to_insulator ;
    float from_semiconductor;
    float to_semiconductor;
    float from_conductors;
    float to_conductors;

};

class band_gap:public resistivity{
    public:
    long int insulator1();
    long int semiconductor1();
    long int conductors1();
};

long int resistivity::insulator(){
    from_insulator = 10;
    to_insulator = 10;
    cout <<" FROM " << from_insulator << " TO POWER 7 || TO " << to_insulator << " TO POWER 20 (ohm - meter ) " << endl;
    return 0;
};

long int resistivity::semiconductor(){
    from_semiconductor = 10;
    to_semiconductor = 10;
    cout <<" FROM " << from_semiconductor << " TO POWER -3 || TO " << to_semiconductor << " TO POWER 8 (ohm - meter ) " << endl;
    return 0;
};

long int resistivity::conductors(){
    from_conductors =10;
    to_conductors = 10;
    cout <<" FROM " << from_conductors << " TO POWER -2 || TO " << to_conductors << " TO POWER -3 (ohm - meter ) " << endl;
    return 0;
};

long int band_gap::insulator1(){
    from_insulator = 6;
    cout << " APPROXIMATE " << from_insulator << " electorn- volt " << endl;
    return 0;


};

long int band_gap::semiconductor1(){
    from_semiconductor = 0.5;
    to_semiconductor = 2.5 ;
    cout << " FROM " << from_semiconductor << " TO 2" << to_semiconductor << endl;
    return 0;

};

long int band_gap::conductors1(){
    from_conductors = 0 ;
    cout << " They have " << from_conductors << " electron-volts " << endl;
    return 0;

};

int main(){
    // system("cls");
    int a,b;
    resistivity order1;
    band_gap order2;
    cout << " WHAT DETAILS DO YO WANTED TO CHECK " << endl;
    cout << " ------------------ " << endl;
    cout << " 1)- Resistivity " << endl << " 2)- Band Gap " << endl<< " ---------- " << endl << " >> " ;
    cin >> a;
    if(a==1){

        cout << " WHOSE RESISTIVITY YOU WANTED TO CHECK " << endl << " ------------- " << endl << " 1) Insulators " << endl << " 2) Semiconductors " << endl << " 3) Conductors " << endl << " --------------- " << " >> " << endl;
        cin >> b;
        if(b==1){
            order1.insulator();
        }
        else if(b==2){
            order1.semiconductor();
        }
        else if(b==3){
            order1.conductors();

        }

    }
    else if(a==2){

        cout << " WHOSE Band Gap YOU WANTED TO CHECK " << endl << " ------------- " << endl << " 1) Insulators " << endl << " 2) Semiconductors " << endl << " 3) Conductors " << endl << " --------------- " << " >> " << endl;
        cin >> b;
        if(b==1){
            order2.insulator1();
        }
        else if(b==2){
            order2.semiconductor1();
        }
        else if(b==3){
            order2.conductors1();

        }

    }
    return 0;

}