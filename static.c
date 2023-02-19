#include<stdio.h>
void demo()
{
      auto int A = 10;
      A++;
     printf("value from demo is : %d\n",A);
  }

   void hello()
     {
        static int B = 10;
        B++;
         printf("value from hello is : %d\n",B);
          }

                   int main()
{
    demo();
    demo();
    demo();

     hello();
      hello();
      hello();
    
      return 0;
}
