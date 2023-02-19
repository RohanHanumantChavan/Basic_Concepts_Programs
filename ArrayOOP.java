import java.util.Scanner;
class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int No)
    {
        this.iSize = No;
        this.Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of element in Array : ");
        
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }


    }

    public void Diplay()
    {
        System.out.println("element of array is :");
        for(int iCnt = 0; iCnt< iSize; iCnt++)
        {
          System.out.println(Arr[iCnt]); 
        }           
        
        }

    public int Addition()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;

    }
}

class ArrayOOP
{
    public static void main(String Arg[])
    {
        ArrayX obj1 = new ArrayX(4);
        obj1.Accept();
        obj1.Diplay();

        int iRet = obj1.Addition();
        System.out.println("Addition is"+iRet);
        
    }
}