#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter length of first side of triangle:";
    cin>>x;
    int y;
    cout<<"enter length of second side of triangle:";
    cin>>y;
    int z;
    cout<<"enter length of third side of triangle:";
    cin>>z;
    if(x+y>z && y+z>x && z+x>y){
        cout<<"yes, they can be the side of triangle";
    }
    else{
        cout<<"no, they can not be side of triangle";
    }
    return 0;

}