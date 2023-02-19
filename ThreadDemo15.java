import java.util.*;
class Data
{
    public int Arr[];

    public Data(int iSize)
    {
        System.out.println("Inside the Contructor");
        Arr = new int[iSize];
    }



     protected void Finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Elements of Array :");
        
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();

        }
    }
    }



class EvenDemo extends Thread
{
    public Data dobj;

    public EvenDemo(Data obj)
    {
        dobj = obj;
    }
    public void run()
    {
        for(int i = 0; i < dobj.Arr.length; i++)
        {
            if((dobj.Arr[i] % 2)== 0)
            {
                System.out.println("Number is Even : "+dobj.Arr[i]);

            }
        }
    }
}

class OddDemo extends Thread
{
    public Data dobj;

    public OddDemo(Data obj)
    {
        dobj = obj;
    }
    public void run()
    {
        for(int i = 0; i < dobj.Arr.length; i++)
        {
            if((dobj.Arr[i] % 2)!= 0)
            {
                System.out.println("Number is Odd : "+dobj.Arr[i]);

            }
        }
    }
}
class ThreadDemo15
{
    public static void main(String A[])  throws InterruptedException
    {
        
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Size of Array : ");
        int ilength = sobj.nextInt();

        Data obj1 = new Data(ilength);
        obj1.Accept();

        EvenDemo eobj = new EvenDemo(obj1);
        OddDemo oobj = new OddDemo(obj1);

        Thread t1 = new Thread(eobj);
        Thread t2 = new Thread(oobj);


        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("End the main Thread");





    }
}

