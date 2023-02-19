#include<stdio.h>
int main()
{   
     int Arr[4] ={10,20,30,40};

     int Brr[] ={10,20,30.};


     int Crr[3];

     Crr[0] = 10; 
     Crr[1] = 20;
     Crr[2] = 30;
     


            printf("Arr is : %d\n",Arr[0]);
             printf("Arr is : %d\n",Arr[3]);

             printf("Brr is : %d\n",Arr[0]);
             printf("Brr is : %d\n",Arr[3]);


              printf("Crr is : %d\n",Arr[0]);
             printf("Crr is : %d\n",Arr[3]);


             printf("size of Arr is : %d\n",sizeof(Arr));
             printf("size of Arr is : %d\n",sizeof(Arr[2]));


             printf("address of Brr is %p\n",&Brr);
             printf("address of Brr is %p\n",&Brr[2]);




















    return 0;
}