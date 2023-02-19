class Base
{
    public 
    int A,B;
    public Base()
    {
        this.A = 0;
        this.B = 0;
        System.out.println("Inside base contructor");
    }
    public void fun()
    {
        System.out.println("Inside the base fun");
    }

}
class DerivedA extends Base
{
    public 
    int C,D;
     public DerivedA()
    {
        this.C = 0;
        this.D = 0;
        System.out.println("Inside DerivedA contructor");
    }
    public void gun()
    {
        System.out.println("Inside the Derived1 gun");
    }


}
class DerivedB extends Base
{
    public
    int X,Y;
    public DerivedB()
    {
        this.X = 0;
        this.Y = 0;
        System.out.println("Inside DerivedB contructor");
    }
     public void mun()
    {
        System.out.println("Inside the Derived2 mun");
    }



}
class Hierachal
{
    public static void main(String arr[])
    {
        DerivedA dobj = new DerivedA();
        dobj.fun();
        dobj.gun();
        //dobj.mun();

        DerivedB dobj2 = new DerivedB();
        dobj2.fun();
        //dobj2.gun();
        dobj2.mun();



    }
}

