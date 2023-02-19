#include <iostream>
using namespace std;

class ashish{
    private:
    int number , number1  ,  pwr1 ,pwr , pwr2,  i;
    long int number3;
    float number2 , number4, number5 ,array[100] , array1[100];
    public:
    void power(int number , int pwr){
        number1 = number;
        number3 = number ;
        cout << "The square of " << number1 << " : " << number1*number1 << endl;
        cout << "The cube of " << number1 << " : " << number1*number1*number1 << endl;
        for(i=0 ; i<pwr ; i++)
        {
            array[i] = number1;
        };

        for(i=0 ; i<pwr-1 ; i++)
        {
            number3 = number3 * array[i];
        };
        
        // for(i=0 ; i<pwr ; i++)
        // {
        //     cout << array[i]<< endl;
        // }

        // cout << " value  in number 2 is : " << number2 << endl;

        cout << "The " << number1 << " to the power of " << pwr << " : " << number3 << endl;

    }; 

    void power(float number2 , int pwr){
        number4 = number2;
        number5 = number2;
        pwr2 = pwr;

        cout << "The square of " << number4 << " : " << number4 * number4 << endl;
        cout << "The cube of " << number4 << " : " << number4 * number4 * number4 << endl;

        for(i=0 ; i<pwr ; i++){
            array1[i]  =number4;

        };

        for ( i=0; i<pwr-1; i++)
        {
            number5 = number5 * array1[i];
        };

        cout << "The " << number4 << " to the power of " << pwr << " : " << number5 << endl;
        



    }
};

int main(){
    int number , pwr ;
    float number2;
    ashish aaa;
    cout << "Enter any integer value : " ;
    cin >> number ;
    cout << "Enter any float value :";
    cin >> number2 ;
    cout << "Enter the power value : " ;
    cin >> pwr;

    aaa.power(number , pwr);
    aaa.power(number2 , pwr);
    return 0;

}