#include<stdio.h>
struct demo
{  
   
   int *ip;
   float *fp;

};


int main()
{  
   int no = 11;
float f = 10.60;


   struct demo obj;
   obj.ip = &no;
   obj.fp = &f;

   printf("value from no is : %d\n",no);
   printf("value from f is :%lf\n",f);

   printf("value from ip is : %d\n",obj.ip);
   printf("value from fp is :%lf\n",obj.fp);













    return 0;
}

















