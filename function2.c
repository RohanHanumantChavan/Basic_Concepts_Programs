#include<stdio.h>

void fun()
{
    printf("incide fun\n");




}






int main()
{
   fun();
   void (*fptr) ();
   fptr = fun;
   fptr();






    return 0;
}
