#include<stdio.h>
int main()
{
    float arr[] = {10.3,43.4,45.34,234.45};

    float *p = NULL;
    float * q = NULL;

    p = arr;
    q = &(arr[3]);


    printf("value from p is : %lf\n",p);
    printf("value from q is : %lf\n",q);

    printf("value from p is : %lf\n",*p);
    printf("value from q is : %lf\n",*q);


    printf("value from p[1] is : %lf\n",(p[1]));
    printf("value from *(2+arr) is : %lf\n",*(2+arr));

    printf("value from q -p is : %lf\n",q-p);
    printf("value from q-2 is : %lf\n",*(q-2));

    printf("value from arr is : %lf\n",0[arr]);


    printf("value from p+2 is : %lf\n",*(p+2));
    printf("value from p+1 is : %lf\n",*(p+1));











    return 0;
}