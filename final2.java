class Base
{
    public void fun()
    {
        System.out.println("Base fun");
    }
    public final void gun()
    {
        System.out.println("Inside the Base gun");
    }

}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Inside the Derived fun");
    }
  //  public void gun()
    {
      //  System.out.println("inside the Derived gun");
}
}
class final2
{
    public static void main(String Arr[])
    {

   Base obj = new Derived();

   obj.fun();
   // obj.gun();
    //bobj.gun();
    }
}