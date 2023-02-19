 
 interface Circle
{
    float PI = 3.14f;

    float Area(float Radius);
    float Circumfarance(float Radius);

}
class Marvellous implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumfarance(float Radius)
    {
        return 2 * PI * Radius;
    }

}
class InterfaceDemo1
  {
    public static void main(String Arr[])
     {
        System.out.println("value of PI is :\n" +Circle.PI);
       Circle cobj = new Marvellous();
       float fRet = 0.0f;

       fRet = cobj.Area(10.5f);
       System.out.println("Area is : \n"+fRet);

       fRet = cobj.Circumfarance(10.5f);
       System.out.println("Circumfrance is : \n"+fRet);

     }
    }

