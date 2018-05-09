#include <iostream>
using namespace std;

int main()
{
const float a=12;
const float b=0.0254;
const float c=2.2;
cout<<"Please enter your height with foots and inchs,and your weight with pounds"<<endl;
int foot;
int inch;
int pound;
cout<<"foot "<<"___\b\b\b";
cin>>foot;
cout<<"inch "<<"___\b\b\b";
cin>>inch;
cout<<"pound "<<"___\b\b\b";
cin>>pound;
float metr=((foot*a)+inch)*b;
float kilo=pound/c;
float BMI=kilo/(metr*metr);
cout<<"Your BMI is  "<<BMI<<endl;

}
