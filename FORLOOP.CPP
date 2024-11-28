// #include<iostream>
// using namespace std;

// int main() {
//     int n ;
//     cout<<"enter number"<<endl;
//     cin>>n;

//   if(n<=20){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }
//   } else if(n>=40 && n<=60){
//     for(int i=40;i<=60;i++){
//         cout<<i<<endl;
//     }
//   } else if (n>=60 && n<=100){
//     for (int i=n;i>=1;i--){
//         cout<<i<<endl;
//     }
//   }

// }

#include<iostream>
using namespace std;

int main () {
  int n;
  cout<<"enter number"<<endl;
  cin>>n;
  if (n<=20) {
    for (int i=1; i<=n; i++) {
      cout<<i<<endl;
    }
  } else if (n>=40 && n<=60){
    for (int i=40; i<=60; i++){
      cout<<i<<endl;
    }
  } else if (n>=60 && n<=100) {
    for (int i=n; i>=1; i--) {
      cout<<i<<endl;
    }
  }
}

int main () {
  int n;
  cout<<"enter number"<<endl;
  cin>>n;
  if (n<=20) {
    for (int i=1; i<=n; i++) {
      cout<<i<<endl;
    }
  } else if (n>=40 && n<=60) {
    for (int i=40; i>=60; i++) {
      cout<<i<<endl;
    }
  }  else if (n>=60 && n<=100) {
    for (int i=n; i>=1; i--) {
       cout<<i<<endl;
    }
  }
}



// wap a program to find the fectorial of a given number
#include<iostream>
using namespace std;

int main() {
//   int n ,fact=1;
//   cout<<"enter number"<<endl;
//   cin>>n;

//   for (int i=n; i>=1; i--) {
//     fact = fact*i;
//     cout<<fact<<endl;

//   }
// }

int n,fact=1;
cout<<"enter number"<<endl;
cin>>n;
for (int i=1; i>=1; i--) {
  fact= fact*1;
  cout<<fact<<endl;
}
}