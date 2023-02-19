#include<iostream>
using namespace std;

class base
{
    public:
    int A;
    int B;
    static int C;
    static int D;

    base()
    {
        cout<<"inside base class default constructor\n";
        A = 0;
        B = 0;
    }

    base(int X, int Y)
    {
        cout<<"inside base class parameterised constructor\n";
        A = X;
        B = Y;
    }

    void fun()
    {
        cout<<"inside non static function fun\n";
        cout<<"value from A is :"<<this->A<<"\n";
        cout<<"value from B is :"<<this->B<<"\n";

        cout<<"value from C is :"<<C<<"\n";
        cout<<"value from D is :"<<D<<"\n";
    }

    static void gun()
    {
        cout<<"inside static method gun\n";
        cout<<"value from C is :"<<C<<"\n";
        cout<<"value from D is :"<<D<<"\n";
    }

    
    

};

int base::C = 40;
 int base::D = 50;
int main()
{
   cout<<"inside the main function\n";
   cout<<"value from C is : "<<base::C<<"\n";
   cout<<"value from D is : "<<base::D<<"\n";

   base::gun();

   base obj1(30,40);
   base obj2(10,20);
   base obj3;

   cout<<"value from inside main obj1 is :"<<obj1.A<<"\n";
   cout <<"value from inside main obj1 is :"<<obj1.B<<"\n";

   cout<<"value from inside main obj2 is:"<<obj2.A<<"\n";
   cout<<"value from inside main obj2 is :"<<obj2.B<<"\n";


   cout<<"value from inside main obj3 is:"<<obj3.A<<"\n";
   cout<<"value from inside main obj3 is :"<<obj3.B<<"\n";


   obj1.fun();
   obj2.fun();
   obj3.fun();









    return 0;
}