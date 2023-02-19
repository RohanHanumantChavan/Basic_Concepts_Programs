class Demo
{
    public int Size;
    public int Arr[];

    public Demo(int No)
    {
        Size = No;
        Arr = new int[Size];
        System.out.println("inside the contructor");
    }
    protected void Finalize()
    {
        System.out.println("Inside Finalize");
        Arr = null;
    }
}

class FinalizeDemo
{
    public static void main(String a[])
    {
        Demo obj = new Demo(4);
        obj = null;
        System.gc();

    }
}