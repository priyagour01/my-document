#include<iostream>
using namespace std;


int main()
{
 int i=1,n=2,j, n2=5;
 while(i<=n){

    cout<<"this is outer loop"<<endl;
    int j=1,n2=5;
    while(j<=n2){
       cout<<"this is inner loop"<<endl;
       j++;

    }
    cout<<"\n";

    i++;


 }

  return 0;

}
