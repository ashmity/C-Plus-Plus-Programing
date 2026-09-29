#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int brr[n];
    for(int i=0;i<n;i++){
       brr[n-i-1]= arr[i];
    }
    cout<<"reverse of an array ";
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
}