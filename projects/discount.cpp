#include <iostream>
using namespace std;

int main(){
    int cost;
    cin>>cost;
    if(cost>1000){
        cost-=cost/10;
        cout<<cost;
    }else{
        cout<<cost;
    }
}