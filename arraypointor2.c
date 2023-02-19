#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = NULL;
    p = (int*)malloc(6*sizeof(int));

    int arr[6] = {10,20,30,40,50,60};

    printf("size of arr is : %d\n",sizeof(arr));
    printf("size of arr of 2 is :%\n",sizeof(arr[3]));


    printf("%d\n",arr[2]);
    printf("%d\n",arr);

    printf("%d\n",arr+1);

    printf("%d\n",(&arr)+1);
    printf("%d\n",(&arr)+2);

    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+4));
    

    printf("%d\n",*(2+arr));
     printf("%d\n",*(3+arr));

     printf("%d\n",2[arr]);
     printf("%d\n",5[arr]);




    








    return 0;
}