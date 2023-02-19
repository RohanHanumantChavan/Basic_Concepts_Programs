#include<stdio.h>
#include<string.h>
int main()
{
  char Arr[6] = "Hello";
  char *ptr = Arr;
  int iCnt = 0;

  while(*ptr != '\0')
  {
    ptr++;
    iCnt++;
  }
  printf("Length of Strings is: %d\n",iCnt);
  return 0;
}