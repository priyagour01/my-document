#include<iostream>
using namespace std;

int main (){

    // nested (if/else)---------------------------------------------------

    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if(num%5==0){
        cout<<num<<"is divisible by 5\n";

        if(num%2==0) {
            cout<<num<<"is even\n";

        }
        else{
            cout<<num<<"is odd\n";
        }

    }
    else{
        cout<<num<<"is not divisible by 5\n";

         if(num%2==0) {
            cout<<num<<"is even\n";

        }
        else{
            cout<<num<<"is odd\n";
        }

    }

}
