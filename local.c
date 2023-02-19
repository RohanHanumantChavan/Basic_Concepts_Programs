#include<stdio.h>

int X = 12;

void demo()
{
    int B = 13;

    printf("value B from demo%\n",B);
    printf("value X from demo%\n",X);

}


int main()
{
    int A = 11;
    
    printf("value A from main%d\n",A);
    printf("value X from main%d\n",X);

    demo();



     return 0;

}