#include <iostream>
using namespace std;

int main(){
    int n,r,sum=0;
    cout<<"enter your number ";
    cin>>n;
    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=r;
    }

    cout<<"sum of digits "<<sum;





    return 0;
}