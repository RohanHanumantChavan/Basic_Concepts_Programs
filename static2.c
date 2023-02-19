#include<stdio.h>
void demo()
{
      auto int A = 100;
     A++;
     printf("value from A is :%d\n",A);

}
 void hello()
 {
    static int B = 100;
    B++;
    printf("value from B is :%d\n",B);
}

int main()

{

    demo();
    demo();
    demo();
    demo();

    hello();
    hello();
    hello();
    hello();


 return 0;
}