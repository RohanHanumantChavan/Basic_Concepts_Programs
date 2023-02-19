#include<iostream>
using namespace std;
class base
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;

public:
base()
{
    cout<<"inside base constructor\n";
    i = 10;
    j = 20;
    k = 30;
}

};

class derived:public base
{
   public:

   void fun()
{
 cout<<"inside derived fun\n";

 cout<<"value from public i base is:"<<i<<"\n";
 // cout<<"value from private j base is:"<<j<<"\n"; not allowed
cout<<"value from protected k  is:"<<k<<"\n";


}

};


int main()
{
   derived dobj;
   cout<<"value from public i base is:"<<dobj.i<<"\n";
// cout<<"value from private j base is:"<<dobj.j<<"\n";   not allowd
// cout<<"value from protected k  is:"<<dobj.k<<"\n";   not allowd




   dobj.fun();
    return 0;
}

