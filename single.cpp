#include<iostream>
using namespace std;

class Base
{
   public:
int  A, B;

Base()

{
  cout<<"inside Base constructor\n";
}

~Base()
{
   cout<<"inside base destructor\n";
}
    void fun()
{
    cout<<"inside base fun\n";
}
};
     class derived:public Base
{
    public: 
    int x,y;


derived()
{

   cout<<"inside derived constuctor\n";
}

~derived()
{
    cout<<"inside derived destructor\n";
}




void gun()
{
    cout<<"inside gun of derived\n";
}
};

int main()
{  

Base Bobj;
derived dobj;

//Bobj.gun(); not allowed
 dobj.fun();
Bobj.fun();

    return 0;
}