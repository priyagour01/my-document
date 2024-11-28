#include<iostream>
using namespace std;

// int main()
// {
//     int n,r,sum=0,temp;
//     cout<<"enter the number="<<endl;
//     cin>>n;
//     temp=n;
//     while(n>0)
//     {
//         r=n%10;
//         sum=sum+r;
//         n=n/10;
//     }
//     if (temp==sum)
//         cout<<"armstrong";
//     return 0;

// }


 
//    int main () {

// int n,r,sum=0,temp ;
// cout<<"enter number=";
// cin>>n;
// temp=n;
// while(n>0)
// {
//     r=n%10;
//     sum=sum+r;
//     n=n/10;

// }

// if (temp==sum)
// cout<<"armstrong";

// return 0;

// }

// int main () {
//     int number,sum=0 ,temp, last;
//     cout<<"enter the test number:";
//     cin>>number;
//     temp =number ;
//     while (number>0) {
//         last =number %10;
//         sum =sum + (last*last*last);
//         number =number/10;
        
//     }
     
    //  return 0;
// }


// int main ()
// {
//     int number ,sum =0, temp,last;
//     cout<<"enter the test number:";
//     cin>>number;
//     temp=number;
//     while (number>0){
//         last =number %10;
//         sum =sum+(last*last*last);
//         number=number/10;

//     }
//          return 0;

// }


// int main () {
//     int number ,sum=0,temp,last;
//     cout<<"enter the test number:";
//     cin>>number;
//     temp=number;

//     while (number>0){
//         last=number%10;
//         sum =sum+(last*last*last);
//         number=number/10;
        
//  }
//          return 0;

// }

// int main () {
//     int number,sum=0,temp,last;
//     cout<<"enter the test number:";
//     cin>>number;
//     temp=number;

//     while(number>0){
//         last=number%10;
//         sum=sum+(last*last*last);
//         number=number/10;
//         if (sum==temp){
//             cout<<"armstrong";

//         }
// else {
//     cout<<"no";
// }
//     }
//     return 0;

// }

// october 10//

#include<iostream>
using namespace std;
int main () {


int number,last,count_even=0,count_odd=0;
cout<<"enter test number:";
cin>>number;

while (number>0) {
    last=number%10;
    if (last%2==0){
        count_even++;
    }
    else {
        count_odd++;

    }
    number =number/10;
}
cout<<"even digit:"<<count_even<<endl;
cout<<"odd digit:"<<count_odd<<endl;


}

