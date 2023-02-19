#include<stdio.h>

 int main()
{
   int Arr[5] = {10,20,30,40,50};

  printf("Base Address of arry: %p\n",Arr);
printf("Base Address of arry : %p\n",&Arr);
printf("Size of array is : %p\n",sizeof(Arr));
  
  return 0;
 }