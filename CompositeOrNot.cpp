#include<iostream>
using namespace std;
int main(){ 
int n;
cout<<"enter number:";
cin>>n;
if(n==1){
      cout<<"neither prime nor composite";
    }
    if(n==2){
        cout<<"prime number";
    }
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"composite number";
        break;
    }
    else{
        cout<<"prime number";
    }
} 
return 0;
}