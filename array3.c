#include<stdio.h>
int main()
{
    int Arr[4] = {10,20,30.};
    int Brr[4];


     printf("Arr is : %d\n",Arr[0]);
     printf("Arr is : %d\n",Arr[1]);
     printf("Arr is : %d\n",Arr[2]);
     printf("Arr is : %d\n",Arr[3]);

     printf("size of Arr is : %d\n",sizeof(Arr));

     printf("addrss of Arr is : %p\n",Arr);
      printf("addrss of Arr is : %p\n",&Arr);
       printf("addrss of Arr is : %p\n",Arr[0]);

     


      Brr[0] = 20;
      Brr[1] = 30;


     printf("Brr is : %d\n",Brr[0]);
     printf("Brr is : %d\n",Brr[1]);
     printf("Brr is : %d\n",Brr[2]);
     printf("Brr is : %d\n",Brr[3]);

     printf("size of Brr is : %d\n",sizeof(Brr));

      return 0;
}