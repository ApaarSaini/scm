#include <iostream>
using namespace std;

int main(){
    int n,sum=0,avg;
    cout<<"enter number of elements in array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/n;
    //second commit
    
    
    cout<<"avg of the elements of arrays = "<<avg;
   
   
    return 0;
    
}