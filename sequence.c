#include<stdio.h>

int Addition (int ino1, int ino2)
{
    int ians = 0;
 ians = ino1 +ino2;
return ians;
}
   int main()
{
 int ivalue1 = 0;
int ivalue2 = 0;
int iRet  = 0;

printf("Enter first number\n");
scanf("%d",&ivalue1);

printf("Enter second number\n");
scanf("%d",&ivalue2);

iRet = Addition (ivalue1, ivalue2);

printf("Addition is : %d\n",iRet);



     return 0;
}
     
  
    
    
   