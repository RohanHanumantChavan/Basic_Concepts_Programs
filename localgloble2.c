#include<stdio.h>
int X = 11;

void fun()
{
    
    int A = 21;
    printf("inside fun\n");
    printf("value of void fun  X is : %d\n",X);
     printf("value of  void fun A is : %d\n",A);


};
void gun()
{
   
    int B = 51;
     printf("inside fun\n");
    printf("value of void gun  X is : %d\n",X);
     printf("value of void gun B is : %d\n",B);
};
int main()
{
    fun();
    gun();
    return 0;
}