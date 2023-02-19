#include<iostream>
#include<stdlib.h>
using namespace std;

class demo
{
    public:
    int X,Y;

    demo()
    {

        cout<<"inside demo function constructor\n";
    }

    ~demo()
    {

        cout<<"inside demo destructor\n";
    }

    void fun()
{
    cout<<"inside fun function\n";


}

};


int main()
{
   int *ptr = NULL;

 // ptr = (int*)malloc(5*sizeof(int));

     ptr = new int;


ptr->fun();
   

   // free(ptr);

   delete ptr;

  
return 0;
}