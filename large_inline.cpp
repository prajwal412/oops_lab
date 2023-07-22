#include<iostream>
using namespace std;
inline float large(float a, float b,float c=50)
{
  return ((a>b&&a>c)?a:b>c?b:c);
}
int main()
{
  float x,y,z;
  cout<<"\nenter 3 no.s:\n";
  cin>>x>>y>>z;
  cout<<"Largest="<<large(x,y,z);
  cout<<"\ntaking 3rd no.as 50\n";
  cout<<"enter 2 no.s:\n";
  cin>>x>>y;
  cout<<"\nLargest using default value="<<large(x,y)<<"\n";
  return 0;
}  
