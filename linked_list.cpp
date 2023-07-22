#include<iostream>
using namespace std;
struct nod
{
  int info;
  struct nod*next;
};
typedef struct nod node;
class list
{
  node *f;
  public:
  list()
  {
    f=NULL;
  }
  void ins(int num)
  {
    node *p=new node;
    p->info=num;
    p->next=f;
    f=p;
  }
  void del()
  {
    node *temp=f;
    if(f==NULL)
    cout<<"\nNo elements to delete.\n";
    else
    {
      cout<<"\n The deleted elements is:\n";
      f=f->next;
      delete temp;
      cout<<"\n Deletion successful \n";
    }
    return;
  }
  void disp()
  {
    node *temp=f;
    if(f==NULL)
    cout<<"\n List is empty \n";
    else
    {
      cout<<"\n Elements in the list are:";
      while(temp!=NULL)
      {
        cout<<" "<<temp->info;
        temp=temp->next;
      }
    }
  }
};
int main()
{
  int num,ch=1;
  list ob;
  cout<<"\n LINEAR LINK LIST\n";
  cout<<"\n1] insert\n2] delete\n3] exit";
  while(ch)
  {
    cout<<"\nEnter your choice\n";
    cin>>ch;
    switch(ch)
    {
      case 1:cout<<"\n Enter no. to be inserted\n";
      cin>>num;
      ob.ins(num);
      ob.disp();
      break;
      case 2:ob.del();
      ob.disp();
      break;
      case 3:return 0;
      default:cout<<"Invalid choice\n";
      break;
    }
  }
}      
