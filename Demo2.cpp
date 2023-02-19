#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;
    static int k;

    Base()
   {
    i = 10;
    j = 20;
   }
   void fun()
   {
    cout<<"Base fun";
   } 

};
int Base::k = 11;
class Derived : public Base
{
    public:
    int x;
    int y;

Derived()
{
    x = 50;
    y = 60;
}
void gun()
{
    cout<<"Derived gun";
}
};
int main()
{
    Base Bobj;
    Derived Dobj;

     cout<<sizeof(Bobj);
     cout<<sizeof(Dobj);

     cout<<Bobj.i<<"\n";
     cout<<Bobj.j<<"\n";

     cout<<Dobj.i<<"\n";
     cout<<Dobj.j<<"\n";

     cout<<Bobj.k<<"\n";
    // cout<<Bobj.

     Bobj.fun();

     Dobj.fun();
     Dobj.gun();

    return 0;
}