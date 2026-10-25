 #include<iostream>
 using namespace std;
 int main (){
    int cp;
    int sp;
    cout<<"enter cost price:";
    cin>>cp;
    cout<<"enter selling price:";
    cin>>sp;
    int f=sp-cp;
    if(f>0){
        cout<<"profit"<<endl;
        cout<<"profit amoubnt is:"<<f;
    }
    else if(f<0){
         cout<<"loss"<<endl;
        cout<<"loss amoubnt is:"<<-f;
    }
    else {
        cout<<"no loss no profit";
    }
    return 0;
 }