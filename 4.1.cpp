#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char first_name[20];
  char last_name[20];
  char grade[2];
  int age;
  cout<<"what is your First name? __________\b\b\b\b\b\b\b\b\b\b";
  cin.getline(first_name,20);
  cout<<"what is your Last name? __________\b\b\b\b\b\b\b\b\b\b";
  cin.getline(last_name,20);
  cout<<"What letter grade do you deserve? _\b";
  cin>>grade;
  cout<<"What is your age? ___\b\b\b";
  cin>>age;
  cout<<"name: "<<first_name<<" "<<last_name<<endl;

  if(strcmp(grade,"A"))
  cout<<"Grade: B"<<endl;
  else if(grade=="B"||grade=="b")
  cout<<"Grade: C"<<endl;
  else if(grade=="c"||grade=="C")
  cout<<"Grade: D"<<endl;
  else 
  cout<<"Grade:"<<grade<<endl;
 
  cout<<"Age: "<<age<<endl;
 
}

