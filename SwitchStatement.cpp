#include<iostream>
using namespace std;
int main(){ 
   int n;
   cout<<"enter a number:";
   cin>>n;
   for(int i=n-1;i>=1;i--){   // n-1 ki jagah n/2 bhi rkh skte hai
      if(n%i==0){
         cout<<i;
         break;   //to get out of the loop
      }
   }
   return 0;
}