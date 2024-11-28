#include<iostream>
using namespace std;

int main() {
      int year;
      double salary,bonus;
      cout<<"enter year of survice and ur salary:";
      cin>>year>>salary;
      if(year>5){
        bonus=salary*(5/100);
        cout<<"bonus:"<<bonus<<endl;
        cout<<"salary:"<<bonus+salary<<endl;

      }
      else{
        cout<<"no bonus\n";
        cout<<"salary:"<<salary<<endl;
        
      }
}