#include<iostream>
using namespace std;

class base
{
   public:
   int A,B;

   base()
   {
    cout<<"inside base constructor\n";
   }
   ~base()
   {

    cout<<"inside base destructor\n";
   }

   void fun()
   {
    cout<<"inside the base fun\n";
   }

};

class derived:public base
{
  public:
  int C,D;

  derived()
  {

    cout<<"inside derived constructor\n";
  }

  ~derived()
  {

    cout<<"inside derived destructor\n";

  }

  void gun()
  {

    cout<<"inside derived gun\n";
  }

};
int main()
{
    derived *ptr = NULL;

    ptr = new derived;

    ptr->fun();
    ptr->gun();

    delete ptr;



    return 0;
}