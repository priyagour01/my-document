#include<iostream>
using namespace std;

int main()
{
    int a=-1,b=1,n,i=1;
    cout<<"enter the number="<<endl;
    cin>>n;
    while(i<=n){
             int c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;
    i++;
}
}

