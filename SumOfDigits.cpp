#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int op,sum = 0;
    while(n!=0){
        op=n%10;
        sum=sum+op;
        n=n/10;
    }
    cout<<sum;
    return 0;
}