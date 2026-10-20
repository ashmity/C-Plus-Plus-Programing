#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer:";
    cin>>x;
    if(x%3==0 || x%5==0 && x%15!=0){
        cout<<x<<" is divisible by 5 or 3 and not divisible by 15";
    }
    else{
         cout<<"condition is not satisfied";
    }
    return 0;
}