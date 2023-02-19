#include<stdio.h>
int multiplication(int no1,int no2)
{
     int Ans = 0;
     Ans = no1*no2;
     return Ans;

}
int main()
{
    int A = 20;
    int B = 20;
    auto int C = 0;
    C = multiplication(A,B);
    printf("multiplication is : %d\n",C);



return 0;
}