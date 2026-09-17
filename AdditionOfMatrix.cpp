#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number of rows of matrices:";
    cin>>a;
    int b;
    cout<<"enter number of column of matrices:";
    cin>>b;
    int arr[a][b];
    int brr[a][b];
    cout<<"enter elements of 1st matrix:";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter elements of 2nd matrix:";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>brr[i][j];
        }
    }
    int crr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    cout<<"sumation of matrix is:"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}