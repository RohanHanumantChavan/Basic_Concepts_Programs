#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int ino)
{  
    if((ino % 2) == 0)
{ 
    return true;
}
   else
{  
    return false;
}
}
    

  int main()
{
   int ivalue = 0;
   bool bRet;
  
  printf("Enter one number\n");
scanf("%d",&ivalue);

bRet = CheckEven(ivalue);
   if (bRet == true)
{
   printf("it is even number\n");
}
else
{
   printf("it is odd number\n");

}
  return 0;
}


   
