import java.util.*;
class Collection1
{
    public static void main(String arg[])
    {
        LinkedList<Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);
        lobj.add(101);

        System.out.println("Element of Likedlist are :"+lobj);

        lobj.addFirst(1);

        System.out.println("Element of Likedlist are :"+lobj);

        lobj.addLast(12);
        System.out.println("Element of Likedlist are :"+lobj);


        Iterator iobj = lobj.iterator();
        System.out.println("Data using iterator is : ");
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        if(lobj.contains(101))
        {
            
        System.out.println("101 is Present in LL");

        }
        else 
        {
             System.out.println("101 is not Present in LL");
        }



        lobj.remove();
        System.out.println("Element of Likedlist are :"+lobj);

        lobj.remove(0);
        System.out.println("Element of Likedlist are :"+lobj);

        lobj.removeLast();
        System.out.println("Element of Likedlist are :"+lobj);

        
        System.out.println("Number of Elements are :"+lobj.size());

        lobj.set(1,500);
        System.out.println("Element of Likedlist are :"+lobj);

        lobj.clear();
        System.out.println("Element of Likedlist are :"+lobj);
















    }
}

