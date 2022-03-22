#include<iostream>
using namespace std;

int main() {
cout<<"enter no of elements in an array :"<<endl;
   int n;
   cin>>n;
   int a[n];
   cout<<"enter array elements :"<<endl;
   for (int i=0;i<n;i++){
       cin>>a[i];
   }
   int j,k,l;
    j=0;
    k=n-1;
   
   while (j<=k){
    swap(a[j],a[k]);
    j++;
    k--;

   } 
    for (int i=0;i<n;i++){
       cout<<a[i];
   }
    return 0;

}
