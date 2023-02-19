import java.util.*;      // Inbuilt package
import Marvellous.Arithematic2;     // User defined package
import Marvellous.PPA.Loop2;

class DemoPackage2
{
     public static void main(String arr[])
     {
          Scanner sobj = new Scanner(System.in);
          System.out.println("Enter first number");
          int iNo1 = sobj.nextInt();
          System.out.println("Enter second number");
          int iNo2 = sobj.nextInt();

          Arithematic2 aobj = new Arithematic2(iNo1,iNo2);

          int iResult = aobj.Addition();
          System.out.println("Addition is  : "+iResult);

          int iResult = aobj.Substraction();
          System.out.println("Substraction is  : "+iResult);



          Loop2 lobj = new Loop2();
          lobj.Display();
     }
}