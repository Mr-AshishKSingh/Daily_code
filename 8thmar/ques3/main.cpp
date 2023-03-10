#include <iostream>
using namespace std;
class fbn{
    private:
    int n;
    public:
    int product(int n){
        if (n==0){
            return 0;
        }
        else if (n == 1){
            return 1;
        }
        else{
            return product(n - 2) + product(n - 1);
        }
        
    };
    friend class fbn1;
};
class fbn1{
    public:
    int calc(fbn& x);
    void disp(fbn& x);
};
void fbn1::disp(fbn& x){
    cout << "No. of terms: ";
    cin >> x.n;
};
int fbn1::calc(fbn& x){
    for (int i = 0; i<x.n; i++){
        cout<<x.product(i)<< " ";
    }
};
int main(){
    fbn j;
    fbn1 k;
    k.disp(j);
    k.calc(j);
    return 0;
}