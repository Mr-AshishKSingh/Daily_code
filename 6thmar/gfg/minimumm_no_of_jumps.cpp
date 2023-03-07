#include<iostream>
using namespace std;
class mini{
    int n,arr[100];
    public:
    void insert(int n){
        cout<<"enter the elemnets "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int result= ans(arr,n);
        cout<<"answer is"<<result;

    }
    int ans(int arr[],int n){
        int i=0,count=0;
        if(n==1){
            return 0;
        }
        while(i<=n){
            if(arr[i]==0){
                return -1;
            }
            i+=arr[i];
            if(i<n)
            count++;
            else{
                count++;


            }
        }
        return count;
    }
};
int main(){
    mini a;
    int n;
    cout << "Enter the number of elements ";
    
    cin>>n;
    a.insert(n);
    return 0;
}