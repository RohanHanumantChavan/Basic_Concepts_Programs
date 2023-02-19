#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *ptr = 0;
    ptr = new int[5];


    delete[]ptr;


    return 0;
}
   


   int *p = NULL;
   p = new int;

   int *q = NULL;
   q = new int(5);


   int *x = NULL;
   x = new int[5];




   delete p;

   delete q;

   delete [] x;