#include<stdio.h>
int main()
{
    int no = 11;
    int *p = &no;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int **a = &p;
    int ****b = &r;


    printf("value from no is : %d\n",no);
    printf("address of no is :%p\n",&no);
    printf("value from q is : %d\n",q);
    printf("value from p %d\n",&no);
    printf("value from r %d\n",*r);
    printf("value from a is : %d\n",**a);

    printf("size of b is : %d\n",sizeof(b));
    printf("address of s is : %p\n",&s);
    printf("value from b is : %d\n",****b);
    printf("size of is :%d\n",sizeof(***r));
    printf("address of no is:%p\n",&****s);










    return 0;
}