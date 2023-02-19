#include<iostream>
using namespace std;
class Demo
{
   public:
   int A,B;

   Demo(int X = 10, int Y = 20)
   {
    A = X;
    B = Y;
   }
};
int main()
{
    Demo Obj1; 
    Demo Obj2(30);
    Demo Obj3(11,21);
    return 0;
}