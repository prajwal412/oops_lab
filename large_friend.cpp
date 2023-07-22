#include<iostream>
using namespace std;
class A{
  int a,b,c;
  public:
  void input()
  {
    cout<<"enter 3no.s";
    cin>>a>>b>>c;
  }
  friend void large(A obj);
};
void large(A obj)
{
  int l=(obj.a>obj.b&&obj.a>obj.c)?obj.a: ((obj.b>obj.a&&obj.b>obj.c)?obj.b:obj.c);
  cout<<"the largest no."<<l<<endl;
}
int main()
{
  A obj1;
  obj1.input();
  large(obj1);
  return 0;
} 
