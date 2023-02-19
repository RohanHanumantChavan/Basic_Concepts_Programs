#include<stdio.h>
int A = 10;

 void fun()
{
   auto int B = 20;
register int D = 20;
static int E = 20;

B++;
D++;
E++;

printf("value of auto variable : %d\n",B);
printf("value of register variable : %d\n",D);
printf("value of static variable : %d\n",E);

}
   
   int main()
{
     int C = 30;

      
   fun();
 fun();
fun();

   return 0;
}
    