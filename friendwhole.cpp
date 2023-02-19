#include<iostream>
using namespace std;
class marvellous 
{
    public:
    void fun();
    void gun();
};
class demo
{
  public:
  int i;
  private:
  int j;
  protected:
  int k;

  demo()
  {
    cout<<"inside demo constructor\n";
    i = 10;
    j = 20;
    k = 30;
  }
  friend class marvellous;

};

void marvellous::fun()
{
    demo obj;
     cout<<"value of i: "<<obj.i<<"\n";
    cout<<"value of j : "<<obj.j<<"\n";
    cout<<"value of k : "<<obj.k<<"\n";
}

void marvellous::gun()
{
    demo obj;
   cout<<"value of i : "<<obj.i<<"\n";
    cout<<"value of j : "<<obj.j<<"\n";
    cout<<"value of k : "<<obj.k<<"\n"; 
}

int main()
{
    marvellous mobj;
    mobj.fun();
    mobj.gun();
    return 0;
}