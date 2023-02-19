class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Base Contructor");
        this.A = 10;
        this.B = 20;
    }
    public void fun()
    {
        System.out.println("Inside the Base fun");
    }
    public void gun()
    {
        System.out.println("Inside the Base gun");
    }
    public void fun(int No)
    {
        System.out.println("Inside the Base fun withe one integer");
    }

}
class Derived extends Base
{
    public int X,Y;

    public Derived()
    {
        System.out.println("Inside the Derived constructor");
        this.X = 30;
        this.Y = 40;
    }
    public void sun()
    {
        System.out.println("Inside the Derived sun");
    }
    public void gun()
    {
        System.out.println("Inside the Derived gun");
    }

}
class Single
{
    public static void main(String arg[])
    {
       // Base bobj1 = new Base();    // no casting
      //  Derived dobj1 = new Derived();  //no casting

        Base bobj2 = new Derived();  //upcasting
        // Derived dobj2 new Base();    //downcasting not allowed

       bobj2.fun();
        bobj2.fun(11);

        bobj2.gun();

       // dobj1.sun();

    }
}