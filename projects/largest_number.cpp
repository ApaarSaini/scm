#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 different integers";
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b && a>c){
        cout<<"largest integer is "<<a;
    }else if(b>c){
        cout<<"largest integer is "<<b;
    }else{
        cout<<"largest integer is "<<c;
    }

    return 0;
}