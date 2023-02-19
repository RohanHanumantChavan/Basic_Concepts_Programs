#include<stdio.h>
int main()
{
    char ch = 'A';
     int i = 10;
     float f = 10.123;
     double d = 10.54321;
     
     int *ip = 0;
     char *cp = 0;
     float *fp = 0;
     double *dp = 0;

    cp =&ch;
    ip =&i;
    fp =&f;
    dp =&d;


     printf("address of ch is %p\n",&ch);
     printf("address of i is %p\n",&i);
     printf("address of f is %p\n",&f);
     printf("address of d is %p\n",&d);

     printf("value from i is : %d\n",*ip);
     printf("value from ch is : %c\n",*cp);
     printf("value from f is : %lf\n",*fp);
     printf("value from d is : %lf\n",*dp);









     









    return 0;
}