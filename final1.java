class Demo
{
    public int iNo1;
    public final int iNo2 = 11;
    public final int iNo3;

    public Demo()
    {
        iNo1 = 0;
        iNo3 = 21;
    }
    
}
class final1
{
    public static void main(String arr[])
    {
        // final int i = 51;  // final variable
        
        Demo dobj = new Demo();
        
        dobj.iNo1++;
        //dobj.iNo2++;   not allwed   characteristics is final
       // dobj.iNo3++;    not allowed characteristics is final

       System.out.println("value from no1 : \n"+dobj.iNo1);


    }
}