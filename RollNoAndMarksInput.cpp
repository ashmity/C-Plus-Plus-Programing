#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++){
        cout<<"enter roll no. of "<<i<<" student and his/her marks:"<<endl;
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
}