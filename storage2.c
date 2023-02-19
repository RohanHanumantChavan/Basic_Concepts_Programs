#include<stdio.h>
int A = 10;
void fun()
{
     auto int B = 20;
     register int C = 20;
     static int D = 20;
     
     A++;
     B++;
     C++;
     D++;
     printf(" value from auto is : %d\n",B);
     printf(" value from register is : %d\n",C);
     printf(" value from static is : %d\n",D);
     printf(" value from fun  is : %d\n",A);
}
      void demo()
      { 

        auto int B = 20;
        static int D = 20;
         
         
        printf("size of auto is : %d\n",sizeof(B));
         printf("address of static is %d\n",(&D));


         printf("size of globle is : %d\n",sizeof(A));
         printf("address of globle is %d\n",(&A));
}
int main()
{
    fun();
    fun();
    fun();
    demo();

 return 0;
}
