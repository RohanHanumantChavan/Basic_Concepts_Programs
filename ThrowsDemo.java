import java.util.*;
class Arithematic
{
    public int Division(int A, int B) throws ArithmeticException
    {
        int iAns = 0;
        iAns = A/B;
        return iAns;
    }
}
class ThrowsDemo
{
    public static void main(String Arr[])
  {
    Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the first number");
    int iNo1 = sobj.nextInt();

    System.out.println("Enter the scond number");
    int iNo2 = sobj.nextInt();

    Arithematic aobj = new Arithematic();

    try
    {
        int iRet = aobj.Division(iNo1,iNo2);
        System.out.println("Division is :"+iRet);
    }
     catch(ArithmeticException obj)
        {
            System.out.println("Exception occured");
            System.out.println(obj);
        }

  }  
}