#include<iostream>
using namespace std;

class demo
{
    public:
    int i;
    int j;

     static int k;
     static int l;

     demo()
     {
         i = 101;
         j = 102;

     }

     demo(int a, int b)
     {
        i = a;
        j = b;


     }

     void fun()
     {
        cout<<"inside non static method fun\n";
        cout<<"value of i:"<<this->i<<"\n";
        cout<<"value of j:"<<this->j<<"\n";

        cout<<"value of k:"<<k<<"\n";
        cout<<"value of l:"<<l<<"\n";

        }

        static void gun()
        {
             cout<<"inside static method gun\n";

          cout<<"value of k:"<<k<<"\n";
        cout<<"value of l:"<<l<<"\n";
           
           }

};

int demo::k = 50;
int demo::l = 60;

int main()
{
    cout<<"value of k:"<<demo::k<<"\n";
    cout<<"value of l:"<<demo::l<<"\n";

    demo::gun();
    demo obj1(10,11);
    demo obj2(20,21);
    demo obj3;

    cout<<"value of i in obj1 :"<<obj1.i<<"\n";
    cout<<"value of i in obj2 :"<<obj2.i<<"\n";
    
    cout<<"value of j in obj1 :"<<obj1.j<<"\n";
    cout<<"value of j in obj2 :"<<obj2.j<<"\n";

    cout<<"value of i in obj1 :"<<obj3.i<<"\n";
    cout<<"value of j in obj2 :"<<obj3.j<<"\n";



    



    obj1.fun();
    obj2.fun();
    obj3.fun();

    return 0;
}





















