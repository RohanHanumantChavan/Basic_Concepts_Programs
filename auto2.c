#include<stdio.h>
int Substraction(int ino1,int ino2)
{
    int Ans = 0;
    Ans = ino1-ino2;
    return Ans;
}
int main()
{
    auto int A = 50;
    register int B = 10;
   static  int C = 0;

   C = Substraction(A,B);
   printf("value of Addition is : %d\n",C);
    return 0;
}
