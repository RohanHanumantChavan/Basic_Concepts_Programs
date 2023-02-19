#include<stdio.h>
void DisplayFactors(int iNo)
{
    int i = 0;
    printf("even factor is:\n");
    for(i = 2; i <= (iNo/2); i=i+2)
    {
        if((iNo % i)== 0) 
        {
        
        printf("%d\n",i);

        }

        }
        
    }

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);
    DisplayFactors(iValue);
    return 0;
}
  