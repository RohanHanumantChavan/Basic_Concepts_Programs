#include<iostream>
using namespace std;

class demo 
{
    public:
    int i;
    float f;
    double d;

      // void fun (demo *this, int A)
    void fun(int A)
    {
       cout<<"inside fun\n";
       cout<<"inside fun is: "<<this->f<<"\n";

    }

    //void gun (demo * this, int A, int B)
void gun(int A, int B)
{
   cout<<"inside gun\n";
   cout<<"inside gun is : "<<this->d<<"\n";

}
};

int main()
{
   demo obj1;   //100
   demo obj2;    //200

   obj1.i = 100;
   obj2.i = 200;

   obj1.fun(12);   //fun(&obj1,12);   fun(100,12);
   obj2.fun(24);     //fun(&obj2,24); fun(200,24);

   obj1.d = 10.10;
   obj2.d = 20.20;

   obj1.gun(10,20);  //fun(&obj1,10,20); gun(10.10,10,20);
   obj2.gun(30,40);

    return 0;
}