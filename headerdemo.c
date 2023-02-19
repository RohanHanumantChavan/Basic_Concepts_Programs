#include "marvellous.h"
int main()
{
    struct Demo obj;
    int no = 11;
    float Marks = 30.6f;
    float Area = 00.00;
    float Ans = PI + Marks + Marks;

    IPTR ptr = &no;

    printf("Area is : %f\n",Area);
    printf("value of no is %d\n",*ptr); 

    return 0;
}
