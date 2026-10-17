 #include<iostream>
 using namespace std;
 int main (){
    int x;
    int y;
    cout<<"enter length of rectangle:";
    cin>>x;
    cout<<"enter breadth of rectangle;";
    cin>>y;
    int a=x*y;
    int p=2*(x+y);
    if(a>p){
        cout<<"area is greater than perimeter";
    }
    else if(a<p){
        cout<<"area is less than perimeter";
    }
    else{
        cout<<"area is equal to perimeter";
    }
    return 0;
 }