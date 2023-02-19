#include<stdio.h>
int main()
{
    int ino1 = 10;
    float fno2 = 12.345;
    double dno3 = 12.3456789;
    char chno4 = 'S';

    printf("integer is : %d\n",ino1);
    printf("float is : %if\n",fno2);
    printf("double is : %if\n",dno3);
    printf("character is : %c\n",chno4);

    printf("size of int %d\n",sizeof(ino1));
    printf("size of float %lf\n",sizeof(fno2));
    printf("size of double %lf\n",sizeof(dno3));
    printf("size of character %c\n",sizeof(chno4));

    printf("address of int: %p\n",(&ino1));
    


 return 0;
}