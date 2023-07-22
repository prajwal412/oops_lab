#include<iostream>
using namespace std;
class employee
{
  int num,basic;
  long da,it,netsal,gsal;
  char name[20];
  public: 
  void read();
  void display();
  void calc();
};
void employee::read()
{
  cout<<"enter employee id,nameand basic salary\n";
  cin>>num>>name>>basic;
}
void employee::calc()
{
  da=(0.52)*basic;
  gsal=da+basic; 
  it=(0.3)*gsal;
  netsal=basic+da-it;
}
void employee::display()
{
  cout<<num<<"\t"<<name<<"\t\t\t"<<basic<<"\t\t"<<da<<"\t\t"<<it<<"\t\t"<<gsal<<"\t\t"<<netsal<<"\n";
}
int main()
{
  int n;
  cout<<"enter no. of employee\n";
  cin>>n;
  employee e[n],*p;
  for(int i=0;i<n;i++)
  {
    p=&e[i];
    p->read();
    p->calc();
  }
  cout<<"sl no. eid\t name \t\t basic salary\t\tDA\t\tgross salary\t\tincome tax\t\t Net salary\n";
  for(int i=0;i<n;i++)
  {
    p=&e[i];
    p->display();
  }
  return 0;
} 
