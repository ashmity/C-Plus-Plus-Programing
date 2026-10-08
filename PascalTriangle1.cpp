#include<iostream>
using namespace std;
int factor(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int a=factor(i);
            int b=factor(j);
            int c=factor(i-j);
            cout<<a/(b*c);
        }
        cout<<endl;
    }
    return 0;
}