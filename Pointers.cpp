#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x; //yha int *p bhi ho skta hai
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    return 0;
}