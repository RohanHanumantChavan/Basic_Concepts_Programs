#include<iostream>
using namespace std;
class demo
{
     public:
     int i;
     float f;
     double d;

     void fun(int A)
     {    
          cout<<"inside fun\n";
          cout<<"this->i<<\n";
          cout<<"value from A is :"<<A<<"\n";
         
    }

        void gun(int A, int B)
        {
            cout<<"inside gun\n";
            int C = 0;
            C = A + B;

            cout<<"value from C is : "<<C<<"\n";


        }
};
         int main()
         {
             demo obj1;
             demo obj2;

             obj1.i = 101;
             obj2.i = 201;

             obj1.fun(11);
             obj2.fun(12);

             obj1.gun(10,20);
             obj2.gun(20,20);


             return 0;





         }















