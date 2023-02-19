class EquelsDemo
{
    public static void main(String B[])
    {
        String s1 = "Hello";
        String s2 = "Hello";

        System.out.println("HashCode of s1 :"+s1.hashCode());
       System.out.println("HashCode of s2 :"+s2.hashCode());

        if(s1.equals(s2))    // using equels we can checked object 
        {
            System.out.println("Object Are Same");
        }
        else
        {
             System.out.println("Object Are Not Same");
        }

        if(s1 == s2)    //if(s1.1001 == s2.1001) is checked Hascode using (==)
        {
             System.out.println("Object Are Same");
        }
        else
        {
              System.out.println("Object Are Not Same");
        }
    }
}