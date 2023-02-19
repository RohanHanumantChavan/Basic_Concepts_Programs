#include<iostream>
using namespace std;
class maths
{
    public:
    int ino1;
    int ino2;

    maths()
    {
       cout<<"inside default constructor\n",
       ino1 = 20;
       ino2 = 10;
    }
    maths(int A, int B)
    {
          cout<<"inside parametrised constructor\n";
         ino1 = A;
        ino2 = B;
    }
        ~maths()
        {
            cout<<"inside destructor\n";
        }
           int addition()
           {

            return ino1+ino2;

           }
           int substraction()
           {

            return ino1 - ino2;
           }
           
           };

           int main()
           {  
               cout<<"inside main function\n";

               maths mobj1;
               maths mobj2(11,10);
               int ret = 0;

               ret = mobj2.addition();

               cout<<"addition is : "<<ret<<"\n";

                 ret = mobj1.substraction();
                 

                 cout<<"substraction is :"<<ret<<"\n";


               return 0;
           }






