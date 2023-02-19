import java.util.Scanner;
class ArrayElement
{
    public static void main(String Arg[])
    {
   
    int iMax = 0;
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the Size of Array:");
    int iSize = sobj.nextInt();

    int Arr[] = new int[iSize];

    System.out.println("Enter the elements of Array");
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt] = sobj.nextInt();
    }
    
    iMax = Arr[0];
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    

    System.out.println("Largest number is:"+iMax);

}
}