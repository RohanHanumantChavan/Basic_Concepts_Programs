#include<iostream>
using namespace std;

public:
void fun(int no)
{
    cout<<"inside the fun\n"; //inside call by value
    no++;
}
void gun(int *ptr)
{
    cout<<"inside the gun \n";  //inside the call by address
    (*ptr)++;
}
void sun(int &ref)
{
    cout<<"inside the sun\n";    //inside the call by reference
    ref++;
}
int main()
{
    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);
    cout<<i<<"\n";

    gun(&j);
    cout<<j<<"\n";

    sun(k);
    cout<<k<<"\n";


    return 0;
}
