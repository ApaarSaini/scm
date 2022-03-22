#include <iostream>
using namespace std;

int main(){
    cout<<"enter number of elements in array ";
    int n,count=0,sum=0;
    cin>>n;
    int arr[n];
    cout<<"enter your array elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            continue;
        }
        else if(arr[i]%2!=0){
            count++;
            sum+=arr[i];
        }else{
            continue;
        }
    }
    cout<<"count of odd numbers "<<count<<" sum of odd numbers = "<<sum;
    return 0;
}