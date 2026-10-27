#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter first number:";
    cin>>n1;
    char ch;
    cout<<"enter an operator";
    cin>>ch;
    int n2;
    cout<<"enter second number";
    cin>>n2;
    switch(ch){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '_':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
        cout<<"invalid operator"<<endl;    
    }
    return 0;
}