#include <iostream>
using namespace std;

int main(){
    float marks;
    cout<<"enter your marks to check your grade"<<endl;
    cin>>marks;
    if(marks>9 && marks<=10){

    }else if(marks>8 && marks<=9){
        cout<<"A+";
    }else if(marks>7 && marks<=8){
        cout<<"A";
    }else if(marks>6 && marks<=7){
        cout<<"B";
    }else if(marks>5 && marks<=6){
        cout<<"C";
    }else if(marks>4 && marks<=5){
        cout<<"D";
    }else{
        cout<<"Failed";
    }








    return 0;
}