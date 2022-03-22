#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks to check your grades";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }else if(marks>=25 && marks<45){
        cout<<"E";
    }else if(marks>=45 && marks<50){
        cout<<"D";
    }else if(marks>=50 && marks<60){
        cout<<"C";
    }else if(marks>=60 && marks<=80){
        cout<<"B";
    }else if(marks>80){
        cout<<"A";
    }

    return 0;
}