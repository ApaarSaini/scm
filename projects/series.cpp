#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the last number ";
    cin>>n;
    for(int i=1;i<=n;i++){

        sum+=i*i;
    }
    cout<<sum;





    return 0;
}