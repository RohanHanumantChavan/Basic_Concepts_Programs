#include<iostream>
using namespace std;
class base 
{
public:
int A,B;

void fun()
{
    cout<<"inside base fun\n";

}

void gun(int i)
{
    cout<<"inside base gun one integer\n";
}
  
  void gun(int i, int b)
  {
    cout<<"inside base two integer\n";


  }
};

class derived : public base
{
   public:
   int Y,Z;

   void sun()
   {
    cout<<"inside derived sun\n";

   }

   void fun()
   {
    cout<<"inside derived fun\n";

   }


};

int main()
{
     derived dobj;

     dobj.fun();
     dobj.gun(10);
     dobj.gun(10,20);
     dobj.sun();



    return 0;
}