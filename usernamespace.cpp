#include<iostream>
using namespace std;

namespace marvellous
{
    class Demo
    {
        public:
        int i,j;

        void fun()
        {
            cout<<"inside fun of demo from marvellous\n";
        }
    };
}
    class hello
    {
        public:
         int x,y;
        
    };


namespace infosystem
{
    class Demo
    {
        public:
        int a,b;

        void fun()
        {
            cout<<"inside fun of demo from infosystem\n"; 
        }
    };
}
int main()
{
    marvellous::Demo obj1;
    obj1.fun();
    infosystem::Demo obj2;
    obj2.fun();

    return 0;
}