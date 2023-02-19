import java.util.Scanner;

class ArrayRuser
{
     public static void main(String arg[])
    {
        int iCnt = 0;
    int iSum = 0;
   

        System.out.println("Inside the main");

        Scanner sobj = new Scanner(System.in);
         
         System.out.println("Enter the size of Array is :");

         int iSize = sobj.nextInt();

         int Arr[] = new int[iSize];

         System.out.println("Enter the number of element lenght Array are :"+Arr.length);

         System.out.println("Enter the number of Array is :");
            for(iCnt = 0; iCnt<Arr.length; iCnt++)
            {
                Arr[iCnt] = sobj.nextInt();

                }

                System.out.println("element of Array is: ");

                for(iCnt = 0; iCnt < Arr.length; iCnt++)
                {
                    System.out.println(Arr[iCnt]);
                }

                for(iCnt = 0; iCnt < Arr.length; iCnt++)
                {
                    iSum = iSum + (Arr[iCnt]);
                }

                System.out.println("Addition is :"+iSum);
         


    }
}