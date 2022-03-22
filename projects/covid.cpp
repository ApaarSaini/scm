#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"minor not eligible";
    }else if(age>=18 && age<=60){
        cout<<"eligible for vaccination with least priority";
    }else if(age>60){
        cout<<"eligible for vaccination with highest priority";
    }










    return 0;
}