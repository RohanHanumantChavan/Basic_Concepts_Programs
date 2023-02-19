class Base
{
    public 
    int X;
    int Y;

    public Base()
    {
        System.out.println("Inside the base contructor");
        this.X = 10;
        this.Y = 20;
    }

        public void fun()
        {
            System.out.println("Inside the base fun");
        }
        
    }

class Derived extends Base 
{
    public 
    int A;
    int B;

    public Derived()
    {
        System.out.println("Inside the Derived contructor");
        this.A = 10;
        this.B = 20;
    }
    public void gun()
    {
        System.out.println("Inside the Derived gun");
    }


}
class DerivedX extends Derived
{
    public
    int C;
    int D;

    public DerivedX()
    {
        this.C = 10;
        this.D = 20;

        System.out.println("Inside the DerivedX contructor");
    }

    public void sun()
    {
        System.out.println("Inside the DerivedX sun");
    }

} 
class Multilevel1
{
    public static void main(String Arr[])
    {
        DerivedX dobj = new DerivedX();
        dobj.fun();
        dobj.gun();
        dobj.sun();

    }
}