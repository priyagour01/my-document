#include<iostream>
using namespace std;

int main(){
    int a=12 ,b=10;
    int r=a&b;
    cout<<"a: "<<a<<" b: "<<b<<"";
    cout<<"bitwise and "<<r<<endl;
    r=a^b;

    cout<<"bitwise or "<<r<<endl;
    r=a^b;

    cout<<"bitwise xor "<<r<<endl;
    r=a>>2;

    cout<<"bitwise right shift 2-->"<<r<<endl;
    r=a^b;

    r=a<<2;
    cout<<"bitwise left shirt"<<r<<endl;
    return 0;

}
