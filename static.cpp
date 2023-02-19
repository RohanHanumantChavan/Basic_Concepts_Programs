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
   i = 0;
   j =0;
}
 demo(int a, int b)
{ 
    i = a;
    j = b;
}

};

int demo ::k = 0;
int demo::l =0;

    int main()
{ 
     


    demo obj1(10,11);
    demo obj2(20,21);
    demo obj3;

cout<<"value of i in obj1 : "<<obj1.i<<"\n";
cout<<"value of i in obj2 : "<<obj2.i<<"\n";

cout<<"value of j in obj1 : "<<obj1.j<<"\n";
cout<<"value of j in obj2 : "<<obj2.j<<"\n";





return 0;

}