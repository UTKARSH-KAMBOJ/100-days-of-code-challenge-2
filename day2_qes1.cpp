#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=0,pos=0;
    cout<<"enter the size of the array:";
    cin>>n;

    vector<int>arr(n);

    cout<<"enter the elememts of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position you wants to delete:";
    cin>>pos;
    // reverse shifting
    for(int i=pos; i<n-1; i++){
    arr[i] = arr[i+1];
    }

    n = n - 1;   // decrease size manually
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
