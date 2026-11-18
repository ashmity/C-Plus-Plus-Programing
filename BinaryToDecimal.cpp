#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a binary number:";
    cin>>n;
    int sum=0;
    int a=n;
    int r=1;
    while(n>0){
        int d=n%10;
        sum=sum+d*r;
        n=n/10;
        r=r*2;
    }
    cout<<"decimal number of "<<a<<" is "<<sum;
}