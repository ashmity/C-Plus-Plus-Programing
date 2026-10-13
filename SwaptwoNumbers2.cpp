// Swap two numbers using third variable with function //
#include<iostream>
using namespace std;
int swap(int& x,int& y){ // ye jo &(ampersand hai) ye wala keval c++ me hota hai
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int x;
    cout<<"enter 1st number:";
    cin>>x;
    int y;
    cout<<"enter 2nd number:";
    cin>>y;
    swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}
