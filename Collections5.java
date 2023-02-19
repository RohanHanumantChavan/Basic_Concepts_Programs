import java.util.*;
class Collections5
{
    public static void main(String arg[])
    {
        ArrayList <Float> aobj = new ArrayList

        aobj.add(10.6f);
        aobj.add(20.6f);
        aobj.add(30.6f);
        aobj.add(40.6f);
        aobj.add(50.6f);

        aboj.addFirst(1.60f);
        aboj.addLast(60.6f);

        Integer iobj = aboj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        aobj.clear();


    }
}