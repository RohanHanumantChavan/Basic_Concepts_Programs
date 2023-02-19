#include<iostream>
using namespace std;

class demo
{
   public:
   int ino1;
   int ino2;
   int ino3;

   demo()
   {
     cout<<"inside demo default constructor\n";
     ino1 = 21;
     ino2 = 19;

   }
   demo(int A, int B)
   {

    cout<<"inside demo parameterised constructor\n";
    ino1 = A;
    ino2 = B;
   }

   demo(int X, int Y, int Z)
   {
    ino1 = X;
    ino2 = Y;
    ino3 = Z;
    cout<<"inside demo 3 integer paramter\n";
   }



 ~demo()
   {
    cout<<"inside demo destructor\n";

   }

   int addition()
   {
    return ino1 + ino2;
   }

   int substraction()
   {
      return ino1 - ino2;
   }

   int multi()
    {
        return ino1 * ino2 * ino3;
    }
};
int main ()
{
    demo dobj1;
    demo dobj2(20,10);
    demo dobj3(10,10,10);
    
    int ret = 0;
    ret = dobj2.addition();
    cout<<"addtion is"<<ret<<"\n";

    ret = dobj1.substraction();
    cout<<"substraction is :"<<ret<<"\n";

    ret = dobj3.multi();
    cout<<"multi is : "<<ret<<"\n";






    return 0;
}