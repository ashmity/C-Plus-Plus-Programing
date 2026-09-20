#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number of rows of matrix:";
    cin>>a;
    int b;
    cout<<"enter number of column of matrix:";
    cin>>b;
    int arr[a][b];
    cout<<"enter elements of matrix:";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    int y;
    cout<<"enter starting coordinate:";
    cin>>x>>y;
    int p;
    int q;
    cout<<"enter ending coordinate:";
    cin>>p>>q;
    int sum=0;
    for(int i=x;i<=p;i++){
        for(int j=y;j<=q;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;

}