// Swap two numbers using pionter, using third variable and with function //
#include<iostream>
using namespace std;
int swap(int* x,int* y){ 
    int temp = *x;
    *x = *y; // * se pointer me store variable ke address se uski value ko manage kr skte h 
    *y = temp;
}
int main(){
    int x;
    cout<<"enter 1st number:";
    cin>>x;
    int y;
    cout<<"enter 2nd number:";
    cin>>y;
    swap(&x,&y);
    cout<<x<<endl<<y;
    return 0;
}
