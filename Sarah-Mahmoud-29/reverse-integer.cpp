#include<iostream>
using namespace std;

int main(){
int number;
cin>>number;
int reverse=0;
  while(number!=0)
  {
  int reminder=number%10;
    number/=10;
    reverse=(reverse*10)+reminder;
  }
  cout<<"Reverse is "<<reverse<<endl; 
return 0;
}
