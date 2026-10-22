#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number:";
    cin>>x;
    int y;
    cout<<"enter second number:";
    cin>>y;
    int z;
    cout<<"enter third number:";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<x<<" is greatest";
        }
        else{
             cout<<z<<" is greatest";
        }
    }
    else{
        if(y>z){
          cout<<y<<" is greatest";  
        }
        else{
            cout<<z<<" is greatest";
        }
    }
    return 0;
}