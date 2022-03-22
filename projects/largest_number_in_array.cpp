#include <iostream>
using namespace std;

int main(){

cout<<"enter number of elements in an array";
int n;
cin>>n;

int a[n];
cout<<"enter array elements";
for(int i=0;i<n;i++)
{
   cin>>a[i];  
}

int lar=a[0];
for(int i=0;i<n;i++)
{
   if(a[i]>=lar)
   lar=a[i];
}
cout<<"largest element is "<<lar<<endl;
    return 0;
}
