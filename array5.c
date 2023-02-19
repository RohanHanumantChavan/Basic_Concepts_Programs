#include<stdio.h>
int main()
{
    char Crr[3] = {'A','B','C'};
    int Arr[4] = {10,20,30,40};
    float Frr[3] = {1.2,3.4,5.6};
    double Drr[2] = {10.30,12.3};
    
     printf("Arr%d\n",Arr[2]);
     printf("Arr%d\n",Arr[0]);

     printf("Frr%lf\n",Frr[1]);
     printf("Frr%lf\n",Frr[0]);

     printf("Drr%lf\n",Drr[1]);
     printf("Drr%lf\n",Drr[0]);

     printf("Crr%c\n",Crr[2]);
     printf("Crr%c\n",Crr[0]);


     printf("Address of Arr is :%p\n",Arr);
     printf("Address of Frr is : %p\n",Frr);
     printf("Address of Drr is :%p\n",Drr);
     printf("Address of Crr is : %p\n",Crr);
     
     printf("size of Arr is : %d\n",sizeof(Arr));
     printf("size of Frr is : %lf\n",sizeof(Frr));
     printf("size of Crr is : %C\n",sizeof(Crr));
     printf("size of Drr is : %lf\n",sizeof(Drr));


    
    return 0;
}