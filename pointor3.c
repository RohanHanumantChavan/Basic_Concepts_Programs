#include<stdio.h>
int main()
{
     
     int i = 10;
     int *p = 0;
     p = &i;
     int **q = &p;
     


     printf("address of i is : %p\n",&i);
     printf("address of q is : %p\n",&(*p));

     printf("size of p is : %d\n",sizeof(*p));


     printf("value from i is : %d\n",*p);
     printf("value from p is %d\n",*q);
     

return 0;
}