#include<iostream>
using namespace std;
class maxi{
    public:
    void copying();
    void getnum();
    float larg();
    float sml();
    private:
    float n,lr,lo,x,m;
    float arr[10], arr2[10] ,arr3[10];
};

void maxi::copying(){
    for(int i =0 ; i < m ; i++){
        arr2[i]=arr[i];
    } 
    for(int i =0 ; i < m ; i++){
        arr3[i]=arr[i];
    }
};
void maxi::getnum(){
    cout<<"Enter n: ";
    cin>>m;
    cout<<"Enter "<<m<<" values :";
    for (int j = 0; j <=m-1; j++)
    {
        cin>>n;
        arr[j]={n};
    }
}    
float maxi::larg(){

    
    for (int i = 0; i <1; i++)
    { for(int j=0 ; j<m ; j++){
        if(arr2[i]<arr[j]){
            arr2[i]=arr[j];
            lr=arr[j];
        }
        else {
            lr = arr2[i];
        }

        
    }
        // if(arr[i]>arr[0]){
        //     lr=arr[i];
        // }
        // else{
        //     lr=arr[i]; 
        // }
    }    
    return lr;
}
float maxi::sml(){
    for (int k = 0; k <1; k++)
    { for(int j =0 ; j<m ; j++){
        if (arr3[k]>arr[j])
        {
            arr3[k] = arr[j];
            lo=arr[j];
        }
        else{
            lo=arr3[k];
        }
        
        

    }
        // if (arr[k]<lo)
        // {
        //     lo=arr[k];
        // }
        // else{
        //     lo=arr[k];
        // }
        
    
    }
    return lo;
}
int main(){
    maxi obj;
    float w,y;
    obj.getnum();
    obj.copying();
    w=obj.larg();
    cout<<"Largest element = "<<w<<endl;
    y=obj.sml();
    cout<<"Smallest element= "<<y<<endl;
    return 0;
}