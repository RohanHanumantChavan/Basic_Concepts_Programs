#include<stdio.h>
int main()
{
     int no1 = 10;
     int no2 = 20;
     int no3 = 30;

     int *ip = NULL;
     

      ip = &no1;
      ip = &no2;
      ip = &no3;

     printf("address of no1 is : %p\n",&no1);
     printf("address of no2 is : %p\n",&no2);
     printf("address of no3 is : %p\n",&no3);
      
      
     ip = &no1;
     
     

     printf("value of no1 is : %d\n",*ip);

     ip = &no2;
     printf("value of no2 is : %d\n",*ip);

     printf("size of no1 is : %d\n",sizeof(&no1));
     




 return 0;
}