#include<iostream>
using namespace std;

int main (){

//     switch (int/char){

//     case 1:  /* entry point*/
//         break; //exit point

//     case 2:  /* entry point*/
//         break; //exit point

//     case 3:  /* entry point*/
//         break; //exit point
    
//     default://optional

//     }

//   // 'P', 'Q'-------------------------//

//     switch (int/char){

//     case 1:  /* entry point*/
//         break; //exit point

//     case 2:  /* entry point*/
//         break; //exit point

//     case 3:  /* entry point*/
        // break; //exit point
    
//     default://optional

//     }

    int dim1,dim2;
    char choice;

    cout<<"Enter 'c' for circle\n 's' for square\n 'r' for rectangle\n";
    cin>>choice;

    switch (choice)
// //     {
    case 'c' : cout<<"enter radius:";
               cin>>dim1;
               cout<<"Area of Circle:"<<3.141*dim1*dim1<<endl;
               break;
    
    case 'r' : cout<<"enter length and breadth:";
               cin>>dim1>>dim2;
               cout<<"Area of Rectangle:"<<dim1*dim2<<endl;
               break;
    
    }
}

