import java.util.*;      // Inbuilt package
import Marvellous.Arithematic3;     // User defined package
import Marvellous.PPA.Array;
class Infopackage
{
    public static void main (String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter first number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter seconde number");
        int iNo2 = sobj.nextInt();

       Arithematic3 aobj = new Arithematic3(iNo1,iNo2);

        int iResult = aobj.Addition();
        System.out.println("Addition is : "+iResult);

         iResult = aobj.Substraction();
        System.out.println("Substraction is :"+iResult);

         iResult = aobj.Multiplication();
        System.out.println("Multiplication is:"+iResult);

        Array obj1 = new Array();
        obj1.Display();



    }
}