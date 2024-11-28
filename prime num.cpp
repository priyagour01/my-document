#include<iostream>
using namespace std;

int main(){

int n,i=1,cnt=0;

cout<<"enter the number="<<endl;
cin>>n;
while (i<=n){

if (n%i=0){
        cnt++;
}
   i++;
if (cnt==2){
        cout<<"prime";
}
else {
        cout<<"not prime";
}

}
}


