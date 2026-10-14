// Swap two numbers without third variable and without function //
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter 1st number:";
    cin>>x;
    int y;
    cout<<"enter 2nd number:";
    cin>>y;

    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl<<y;
    return 0;
}