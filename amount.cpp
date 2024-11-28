#include<iostream>
using namespace std;

int main() {
    int amount;
    float discount;
    int final_amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;

    if (amount>=1000){
        discount=amount*(20.0/100);
        final_amount=amount-discount;
        cout<<"final amount is:"<<final_amount;

    } else if(amount>=500){
discount=amount*(10.0/100);
final_amount=amount-discount;
cout<<"final amount is :"<<final_amount;

    } else {
        cout<<"discount is not available";
    }
}
