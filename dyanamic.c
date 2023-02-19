#include<stdio.h>
#include<stdlib.h>
int main()
{
   // int arr[4];

    int *p = NULL;
    p = (int*)malloc(5*sizeof(int));

int arr[5] = {10,20,30};

   printf("%d\n",arr[0]);
   printf("%d\n",arr[1]);
   printf("%d\n",arr[2]);
   printf("%d\n",arr[3]);
   printf("%d\n",arr[4]);
    
    printf("%d\n",arr);
    printf("%d\n",arr+1);
    


    free (p);


    return 0;
}







