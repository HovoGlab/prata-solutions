#include <iostream>
using namespace std;
int main ()
{
 int a;
 int b;
 cout<<"Enter 2 number"<<endl;
 cout<<"Number 1: ";
 cin>>a; 
 cout<<"number 2: ";
 cin>>b;
 long result=0;
 for(int i=a;i<=b;i++)
{
 result=result+i;
 
}
 cout<<"Sum of numbers betwen "<<a<<" and "<<b<<" is "<<result<<endl; 


}

