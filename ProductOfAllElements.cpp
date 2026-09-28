#include<iostream>
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
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"product is "<<product;

}
