#include<stdio.h>
int main()
{
    int i = 10;
    char ch = 'A';
    float f = 2.3;
    double d = 20.3;

    int *ip = NULL;
    char *cp = NULL;
    float *fp = NULL;
    double *dp = NULL;

    ip = &i;
    cp = &ch;
    fp = &f;
    dp = &d;

    printf("value from ip is : %d\n",ip);
    printf("value from cp is :%c\n",cp);

    printf("value from i is : %d\n",*ip);
    printf("value from ch is :%c\n",*cp);
    

    return 0;
}