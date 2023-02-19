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
    cout<<"inside base fun\n";
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

class derivedX:public derived
{
   public:
   int Y,Z;

    derivedX()
    {
        cout<<"inside derivedX constructor\n";
    }

    ~derivedX()
    {
        cout<<"inside derivedX destructor\n";
    }

    void sun()
    {
        cout<<"inside derivedX sun\n";
    }

};
int main()
{
    cout<<"size of base is:"<<sizeof(base)<<"\n";
    cout<<"size of derived is :"<<sizeof(derived)<<"\n";
    cout<<"size of derivedX is :"<<sizeof(derivedX)<<"\n";

    derivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();


    return 0;
}