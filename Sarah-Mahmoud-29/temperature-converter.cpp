#include<iostream>
using namespace std;

int main(){
double celsius;
cout<<"Enter temperature in Celsius: "<<endl;
cin>>celsius;

double fahrenheit=(celsius * 9.0 / 5.0) + 32.0;

cout<<"Temperature in Fahrenheit = "<<fahrenheit<<endl;

return 0;
}
