#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer:";
    cin>>x;
    if(x>99&&x<1000){
        cout<<"yes, "<<x<<" is three digit number";
    }
    else{
         cout<<"no, "<<x<<" is not a three digit number";
    }
    return 0;
}