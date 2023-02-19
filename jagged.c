#include<stdio.h>
int main()
{
    int Arr[3] [4] = {{10,20,30},{40,50,60,70},{80,90}};

    printf("size of array : %d\n",sizeof(Arr));
    printf("size of :%d\n",sizeof(Arr[0]));

    printf("%d\n",Arr[0][0]);
     printf("%d\n",Arr[0][1]);
      printf("%d\n",Arr[0][2]);
       printf("%d\n",Arr[1][0]);


    return 0;
}