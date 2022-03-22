#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter day number "<<endl;
    cin>>n;
    if(n==1){
        cout<<"sunday";
    }else if(n==2){
        cout<<"monday";
    }else if(n==3){
        cout<<"tuesday";
    }else if(n==4){
        cout<<"wednesday";
    }else if(n==5){
        cout<<"thursday";
    }else if(n==6){
        cout<<"friday";
    }else if(n==7){
        cout<<"saturday";
    }else{
        cout<<"invalid day number (please include numbers between 1 and 7)";
    }
    return 0;
}