#include<iostream>
using namespace std;

int main(){

int i=1,j,esum=0,osum=0;

cout<<"enter the number="<<endl;
cin>>j;

while (i<=j){
if(i%2==0){
     esum=esum+i;

}
else{

        osum=osum+i;

}

i++;
}

cout<<osum<<esum;
}



