abstract class Arithematic
{
    public int Addition(int No1, int No2)
    {
        return No1 + No2;
    }
    public abstract int Substraction(int No1,int No2);
     
}

class Marvellous extends Arithematic
{
     
   public int Substraction(int No1, int No2)
   {
    return No1 -No2;
    
   }
     
}
class AbstractDemo1
{
    public static void main (String Arr[])
    {
        Marvellous mobj = new Marvellous();
        int iRet = 0;

        iRet = mobj.Addition(5,15);
       System.out.println("Addition is :\n"+iRet);

       iRet = mobj.Substraction(50,30);
       System.out.println("Substraction is \n"+iRet);

       

        


    }
}