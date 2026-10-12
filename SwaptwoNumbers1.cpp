// Swap two numbers using third variable without function //
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter 1st number:";
    cin>>x;
    int y;
    cout<<"enter 2nd number:";
    cin>>y;

    int temp = x;
    x = y;
    y = temp;
    cout<<x<<endl<<y;
    return 0;
}