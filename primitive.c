#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 10;
    float f = 10.12;
    double d = 20.30;

    printf("value of ch is : %c\n",ch);
    printf("value of i is : %d\n",i);
    printf("value of f is : %lf\n",f);
    printf("value of d is : %lf\n",d);

    printf("size of ch is %c\n",sizeof(ch));
    printf("size of i is %d\n",sizeof(i));
    printf("size of f is %lf\n",sizeof(f));
    printf("size of d is %lf\n",sizeof(d));

    printf("address of ch is :%p\n",ch);
    printf("address of i is :%p\n",i);
    printf("address of f is :%p\n",f);
    printf("address of d is :%p\n",d);

    



    return 0;
}