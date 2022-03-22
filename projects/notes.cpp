#include<iostream>
using namespace std;


int main(){
    int n,note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,note1=0;
    cout<<"enter the amount ";
    cin>>n;
    while(n!=0){
        if(n>=500){
            note500=n/500;
            n%=500;
        }else if(n>=200){
            note200=n/200;
            n%=200;
        }else if(n>=100){
            note100=n/100;
            n%=100;
        }else if(n>=50){
            note50=n/50;
            n%=50;
        }else if(n>=20){
            note20=n/20;
            n%=20;
        }else if(n>=10){
            note10=n/10;
            n%=10;
        }else if(n>=1){
            note1=n/1;
            n%=1;
        }

    }
    cout<<"no of 500 notes "<<note500<<endl;
    cout<<"no of 200 notes "<<note200<<endl;
    cout<<"no of 100 notes "<<note100<<endl;
    cout<<"no of 50 notes "<<note50<<endl;
    cout<<"no of 20 notes "<<note20<<endl;
    cout<<"no of 10 notes "<<note10<<endl;
    cout<<"no of 1 notes "<<note1<<endl;

}