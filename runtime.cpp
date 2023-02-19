#include<iostream>
using namespace std;

class base
{
    public:

int A,B;

void fun()
{
cout<<"base fun\n";
} 

void gun (int i)
{

   cout<<"base gun\n";
}

void gun (int i,int j)
{
   cout<<"base gun\n";
}

};

class derived : public base
{
    public :
int x,y;
    void sun()
{
    cout<<"derived sun\n";
}

void fun()
{
    cout<<"derived fun\n";
}
};



int main()
{
   derived dobj;

   dobj.fun();
   dobj.gun(10,12);
return 0;
}