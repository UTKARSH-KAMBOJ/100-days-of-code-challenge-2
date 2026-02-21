#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[]="hello";
    for(int i=strlen(str)-1;i>=0;i--){
        cout<<str[i];
    }
    return 0;
}
