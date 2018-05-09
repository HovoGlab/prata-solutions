#include <iostream>
using namespace std;
float b=100;
int a=100;
 int main ()
 {
 for(int i=0;i>=0;i++)
 {
 a=a+10;
 b=b+(b*0.05);
 if(b>a)
 {
 cout<<i<<"tari heto b-n kancni a-in"<<endl;
 break;
 }
 
 }
}
