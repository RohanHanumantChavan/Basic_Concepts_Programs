#include<iostream>
using namespace std;
class demo
{
    public:
    int i;
    int j;
    const  int k;
    const int  l;

    demo() : k(12), l(20)
    {
        i = 11;
        j = 21;
    }
    demo(int A, int B, int C, int D) : k(C),l(D)
    {
       i = A;
       j = B; 
    }    
};
int main()
{
    demo obj1;
    demo obj2(50,60,70,80);

    obj1.i++;
    obj2.i++;

   // obj1.k++; //na
    //obj2.k++;  //na
    

      return 0;
}
