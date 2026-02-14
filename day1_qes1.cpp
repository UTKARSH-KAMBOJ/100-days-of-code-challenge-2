#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, pos, x;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n+1);   // increase size by 1
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position: ";
    cin>>pos;
    cout<<"Enter the number: ";
    cin>>x;
    // Shift elements right
    for(int i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = x;
    cout<<"Updated array: ";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
