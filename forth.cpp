#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      string name;
      int ph;
      int ch;
      int mth;
      float per;

      cout<<"enter your name"<<endl;
      cin>>name;
      cout<<"enter your ph marks"<<endl;
      cin>>ph;
      cout<<"enter your ch marks"<<endl;
      cin>>ch;
      cout<<"enter your mth marks"<<endl;
      cin>>mth;
      int total =ph+ch+mth;
      per=(total)/3.0;
      int res=per;
          cout << "student name:" << name <<endl;
          cout << "total marks:" << total <<endl;
          cout << "percentage:" << per <<"%" <<endl;
}

