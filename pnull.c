#include<stdio.h>
int main()
{
    int no1 = 15;
    int no2 = 25;
    int no3 = 35;

    int *p = NULL;
    p = &no1;
    printf("%d\n",*p);

    p = &no2;
    printf("%d\n",*p);

    p = &no3;

    printf("%d\n",*p);

return 0;


}