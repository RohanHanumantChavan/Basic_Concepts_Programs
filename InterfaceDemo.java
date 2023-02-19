interface Circle
{
    float PI = 3.14f;

    float Area(float Radius);
    float Circumfrance(float Radius);
}
class Marvellous implements Circle
{
    public float Area(float Radius)
    {
        return PI * Radius * Radius;
    }
    public float Circumfrance(float Radius)
    {
        return 2 * PI * Radius; 
    }
}
class InterfaceDemo
{
    public static void main(String Arr[])
    {
        System.out.println("Value of PI is:"+Circle.PI);
        Circle cobj = new Marvellous();
        float Ret = 0.0f;

        Ret = cobj.Area(10.5f);
        System.out.println("Area is : \n"+Ret);

        Ret = cobj.Circumfrance(10.5f);
        System.out.println("Circumfrance is : \n"+Ret);

    }
}