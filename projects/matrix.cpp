
#include <iostream>

using namespace std;

int main()
{
    cout<<"enter number of rows ";
    int r;
    cin>>r;
    cout<<"enter number of columns ";
    int c;
    cin>>c;
    cout<<"number of elements you need to input = "<<r*c<<endl;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];            
        }
    }
    cout<<"your matrix of 2d array is "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";            
        }
        cout<<endl;
    }
    

    return 0;
}