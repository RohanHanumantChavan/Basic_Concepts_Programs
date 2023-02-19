#include<stdio.h>

struct demo
{
    int i;
    float f;
    int j;
    double d;


};
int main()
{
     struct demo obj1;
     struct demo obj2;
     struct demo obj3;
     struct demo obj4;



    obj1.d = 11.34334;
    obj2.i = 11;
    obj3.j = 51;
    obj4. f = 12.1112;
     
     printf("value from i is : %d\n",obj2.i);
     printf("value from d is : %lf\n",obj1.d);
     printf("value from j is : %d\n",obj3.j);
     printf("value from f is : %lf\n",obj4.f);








    return 0;
}