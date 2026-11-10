#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int reverse = 0;
    int op;
    for(int i=1;n!=0;i++){
        op=n%10;
        reverse=reverse*10+op;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}