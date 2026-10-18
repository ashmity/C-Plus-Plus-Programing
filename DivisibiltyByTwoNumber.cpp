#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer:";
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<x<<" is divisible by 5 and 3 both";
    }
    else{
         cout<<x<<" is not divisible by 5 and 3 both";
    }
    return 0;
}