#include<stdio.h>
int main()
{
     int Arr[5] = {10,20,30,40,50};

     int *p = &(Arr[0]);
     int *q =&(Arr[4]);



     printf("value from Arr is : %d\n",(Arr[0]));
     printf("size of array is : %d\n",sizeof(Arr));
     printf("Address of array is : %p\n",Arr);
     printf("Address of array is : %p\n",&(Arr));
     printf("Address of array is : %p\n",&(Arr[0]));


     printf("value from *p is : %d\n",*p);
     printf("value from *q is : %d\n",*q);

     printf("Address of is : %p\n",&p);
     printf("Address of is : %p\n",&q);


return 0;
}