#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter positive integer:";
    cin>>x;
    if(x%5==0){
        cout<<"yes,its divisible by 5";
    }
    else{
        cout<<"no, its is not divisible by 5";
    }
    return 0;
}