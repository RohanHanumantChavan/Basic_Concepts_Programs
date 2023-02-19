abstract class Arithematic
{
    public int Addition(int iNo1, int iNo2)     // concrate method    
    {
        return iNo1 + iNo2;
    }
    public abstract int Substraction(int iNo1, int iNo2);    // abstract method
    public abstract int Multification(int iNo1, int iNo2);    //abstract method
} 
class Marvellous extends Arithematic
{
    public int Substraction(int iNo1, int iNo2)  // concrat
    {
        return iNo1 - iNo2;
    }
    public int Multification(int iNo1, int iNo2)   //concrat
    {
        return iNo1 * iNo2;
    }
}

class Abstract
{
    public static void main(String Arr[])
    {
        Marvellous mobj = new Marvellous();
        int iRet = 0;
        iRet = mobj.Addition(11,10);
        System.out.println("Addition is :\n"+iRet);

        iRet = mobj.Substraction(10,15);
        System.out.println("Subtraction is : \n"+iRet);

        iRet = mobj.Multification(10,10);
        System.out.println("Mulitification is : \n"+iRet);
    }
}