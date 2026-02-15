#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=0;
    int count=0;
    int target=0;
    int found=0;

    cout<<"enter the size of the array:";
    cin>>n;

    vector<int> arr(n);

    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter the target:";
    cin>>target;

    for(int i=0;i<n;i++){
        count++;
        if(target==arr[i]){
            cout<<"found at index="<<i;
            found=1;   // set found only when target is found
            break;
        }
    }

    if(found==0){
        cout<<"not found";
    }

    cout<<"\ncomparison="<<count;

    return 0;
}
