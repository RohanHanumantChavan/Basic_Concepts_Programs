#include<iostream>
using namespace std;

class demo
{
   public:
   int A;
   int B;
   static int C;
   static int D;

demo()
{
    cout<<"incide demo default constructor\n";
    A = 0;
    B = 0;
}

demo(int X, int Y)
{
    A = X;
    B = Y;
    cout<<"inside demo parameterised constructor\n";
}










};


int main()
{


    return 0;
}