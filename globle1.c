#include<stdio.h>
int A = 10;
extern int B;
static int R = 611;

int main()
 {
     printf("value of A is : %d\n",A);
     printf("value of B from other file is : %d\n",B);
     printf("value of R is : %d\n",R);

       return 0;
}
