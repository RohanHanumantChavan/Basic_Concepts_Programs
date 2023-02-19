#include<stdio.h>

int addition(int value1, int value2)
{
    int ret = 0;
    ret = value1+ value2;
    return ret;
}
int main()
{
    int no1 = 0;
    int no2 = 0;
    int ans = 0;

    printf("enter first no\n");
    scanf("%d",&no1);
    printf("enter seconde no \n");
    scanf("%d",&no2);

    ans = addition(no1, no2);
    printf("addition is : %d\n",ans);
    return 0;
}