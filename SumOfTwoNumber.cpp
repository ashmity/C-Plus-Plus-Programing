#include <iostream>
using namespace std;
int num(int a, int b){
    cout << a+b;
    // return a+b;
    return 0;
}
int main(){
    int a;
    cout << "enter 1st number:";
    cin >> a;
    int b;
    cout << "enter 2nd number:";
    cin >> b;
    // cout << num(a,b);
    num(a,b);
    return 0;
}