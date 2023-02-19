import java.util.*;
class Collection15
{
    public static void main(String arg[])
    {
        Hashtable<String, Integer>hobj = new Hashtable<String,Integer>();

        hobj.put("PPA",18000);
        hobj.put("LB",17500);
        hobj.put("Python",16500);
        hobj.put("LSP",21000);

        System.out.println("Hashtable data is  : "+hobj);

        System.out.println(hobj.get("Python"));

        


        hobj.remove("LB");
        System.out.println("Hashtable data is  : "+hobj);

        Enumeration eobj = hobj.keys();
        while(eobj.hasMoreElements())
       {
          System.out.println("Hashtable Data is : "+eobj.nextElement());
       } 

        


       
    }
}