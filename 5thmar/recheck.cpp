#include <iostream>
using namespace std;



class Solution{
  public:
    int minJumps(int arr[], int n){
        int steps = arr[0];
        int jump = 1;
        int maxR = arr[0];
        
        if(n==1) return 0;
        
        if(arr[0]==0) return -1;
        
        else{
            for(int i = 1 ; i<n;i++){
                if(i == n-1){
                    return jump;
                }
                maxR = max(maxR,i+arr[i]);
                
                steps--;
                
                if(steps < 0) return -1;
                if(steps == 0){
                    jump++;
                    
                    if(i>= maxR){
                        return -1;
                    }
                    steps = maxR - i;
                }
               
            }
            return -1;
        }
        
        
        
    }
};

int main(){
    int t ;
    cin >> t ;
    while(t!=0){
        int n , i ;
        cin >> n ;
        int arr[n];
        for(int i = 0  ; i < n ; i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minJumps(arr , n ) << endl;
        t--;
    }
    return 0;
}
