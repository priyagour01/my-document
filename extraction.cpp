// #include<iostream>
// using namespace std;

// int main () {
//     int digit,final_number,iteration;
//     cout<<"how many digit number ,u want to create:";
//     cin>>iteration;

//     while(iteration>0) {
//         cout<<"enter digit:";
//         cin>>digit;
//         final_number=final_number*10+digit;

//         iteration--;
//     }



//         cout<<"final_number:"<<final_number;
// }

        

#include<iostream>
using namespace std;

int main () {
    int digit,final_number,iteration;
    cout<<"how many digit number ,u want creat:";
    cin>>iteration;
    while (iteration>0) {
        cout<<"enter digit:";
        cin>>digit;
        final_number=final_number*10+digit;
        iteration--;

    }

    cout<<"final_number:"<<final_number;
}

    
