#include<iostream>
using namespace std;
class Demo
{
    public:
    int i;
    int j;

    Demo()
    {
        i = 11;
        j = 21;
    }

    Demo(int A, int B)
    {
        i = A;
        j = B;
    }


};


int main()
{
    Demo obj1;
    Demo obj2(21,51);

   const Demo obj3;
   const Demo obj4(61,71);

    obj1.i++;
    obj2.j++;

    // obj3.i++;
    // obj4.j++;

    cout<<"value from i is : "<<obj1.i<<"\n";
    cout<<"value from i is : "<<obj2.j<<"\n";

    return 0;
}