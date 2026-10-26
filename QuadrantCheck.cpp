#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"enter point of x axis:";
    cin>>x;
    int y;
    cout<<"enter point of y axis:";
    cin>>y;
    if(x>0){
        if(y>0){
            cout<<"point lies on 1st quadrant";
        }
        else{
            cout<<"point lies on 4th quadrant";
        }
    }
    else{
        if(y>0){
            cout<<"point lies on 2nd quadrant";
        }
        else{
            cout<<"point lies on 3rd quadrant";
        }
    }
    return 0;
}