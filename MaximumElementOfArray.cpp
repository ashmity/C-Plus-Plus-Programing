#include<iostream>
#include<climits>
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
    int min=INT_MAX;
     for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    cout<<"minimum element of array is "<<min;
}