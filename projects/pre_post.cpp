#include <iostream>
using namespace std;


int main(){
    
    int a=10,b;
    b=++a;
    cout<<"pre-increment"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"post-increment"<<endl;
    a=10;
    b=a++;
    cout<<a<<endl;
    cout<<b<<endl;
    //decrement operators
    a=10;
    cout<<"pre-decrement"<<endl;
    b=--a;
    cout<<a<<endl;
    cout<<b<<endl;

    a=10;
    cout<<"post-decrement"<<endl;
    b=a--;
    cout<<a<<endl;
    cout<<b<<endl;
    

    
return 0;
}