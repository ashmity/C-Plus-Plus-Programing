#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the value of n:";
   cin>>n;
   for(int i=n;i<=10*n;i=i+n){
    cout<<i<<endl;
   }
    return 0;
}