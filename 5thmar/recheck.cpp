// #include <iostream>
// using namespace std;



// class Solution{
//   public:
//     int minJumps(int arr[], int n){
//         int steps = arr[0];
//         int jump = 1;
//         int maxR = arr[0];
        
//         if(n==1) return 0;
        
//         if(arr[0]==0) return -1;
        
//         else{
//             for(int i = 1 ; i<n;i++){
//                 if(i == n-1){
//                     return jump;
//                 }
//                 maxR = max(maxR,i+arr[i]);
                
//                 steps--;
                
//                 if(steps < 0) return -1;
//                 if(steps == 0){
//                     jump++;
                    
//                     if(i>= maxR){
//                         return -1;
//                     }
//                     steps = maxR - i;
//                 }
               
//             }
//             return -1;
//         }
        
        
        
//     }
// };

// int main(){
//     int t ;
//     cin >> t ;
//     while(t!=0){
//         int n , i ;
//         cin >> n ;
//         int arr[n];
//         for(int i = 0  ; i < n ; i++){
//             cin >> arr[i];
//         }
//         Solution obj;
//         cout << obj.minJumps(arr , n ) << endl;
//         t--;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

class ashish{
    public:
    int array[100];
    int jumps;

    void get_array( int n);
    int calculate_jumps(int n);


};

int ashish::calculate_jumps(int n){
    jumps = 1;
    int i = 1;
    if(n==1){
        return 0;
    }


    if(array[0] == 0){
        return -1;
    }

    else{
        for(int i = 1 ; i < n ; i++){
            if( n == 2){
                return jumps;
            }
            

        }


        cout << "Let me decide please " << endl;
    }
}

void ashish::get_array(int n ){
    cout << "Enter " << n << " Values " << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> array[i]; 
    }

};

int main(){
    int n ;
    cout << "Number of elements in your array: " ; 
    cin >> n;

    ashish o;
    o.get_array(n);
    cout <<  o.calculate_jumps(n);
    return 0;
}
