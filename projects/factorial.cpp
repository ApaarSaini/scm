#include <iostream>
using namespace std;
//this file codes factorial of a number
int main(){
    int n,fact=1;
    cout<<"enter number to find its factorial ";
    cin>>n;

    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<"factorial of the number "<<n<<" is "<<fact;


    return 0;
}