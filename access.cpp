#include<iostream>
using namespace std;
class base
{
   public:
   int i;
   private:
   int j;
   protected:
   int k;

public:
   base()
   {
    i = 10;
    j = 20;
    k = 30;
   }

   void fun()
   {
    cout<<"inside base fun\n";
    cout<<"value of public i from fun is : "<<i<<"\n";
    cout<<"value of private j from fun is :"<<j<<"\n";
    cout<<"value of protected k from fun is :"<<k<<"\n";

   }

};


int main()
{
    base bobj;

    cout<<"value of public i from main is : "<<bobj.i<<"\n";
   // cout<<"value of private j from fun is :"<<bobj.j<<"\n";   not allowd beaucase j is private not access main
   // cout<<"value of protected k from fun is :"<<bobj.k<<"\n";   not allowd beaucase k is protected not access main

    bobj.fun();
    return 0;
}