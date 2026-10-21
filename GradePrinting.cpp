#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter marks of student:";
    cin>>x;
    if(x>80 && x<=100){
        cout<<"very good";
    }
    else if(x>60 && x<81){
        cout<<"good";
    }
    else if (x>40 && x<61){
        cout<<"average";
    }
    else{
        cout<<"fail";
    }
}