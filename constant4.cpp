#include<iostream>
using namespace std;
class demo
{
    public :
    int i,j;
    

    demo(int X = 10, int Y = 20)
    {
    i = X;
    j = Y;
    }

    void fun()
    {
        i++;
        j++;
        }

    void gun() const
    {
        cout<<"Inside the constant function :\n";
      // i++;  not allowed
    // j++;    not allowed 
    }
};
int main()
{
    demo obj1;
    demo obj2(51);
     demo obj3(11,21);

     obj3.fun();
     obj3.gun();

    return 0;
}