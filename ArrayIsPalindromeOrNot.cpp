#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"array is palindrome";
    }
    else{
        cout<<"array is not palindrome";
    }
}