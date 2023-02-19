#include<iostream>
using namespace std;
class circle
{
    public:
    float pi;
    float radius;

    circle()
    {
        pi = 3.14;
        radius = 0.0;
    }
    circle (float A, float B)
    {
        pi =A;
        pi = B;
    }
    void display()
    {
        cout<<"value of radius is :"<<radius<<"\n";
    }

    virtual float area() = 0;
    virtual float circumfarance() = 0;

};

class marvellous : public circle
{
    public:

    marvellous()
    {

    }
    
    float area()
    {
        float ans = pi *radius *radius;
        return ans;
    }

    float circumfarance()
    {
        float ans = 0.0;
        ans = 2 * pi *radius;
        return ans;
    }
};


int main()
{

marvellous mobj1;
marvellous mobj2(3.14,10.89);
    return 0;
}