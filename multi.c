#include<stdio.h>
int Addition(int ivalue1,int ivalue2)
{
int ioutput = 0;
ioutput = ivalue1+ivalue2;
return ioutput;
}
int main()
{

    int ino1 = 5;
    int ino2 = 7;
    int iAns = 0;


   int Ans = Addition(ino1,ino2);

    printf(" %d\n",iAns);



 return 0;
}