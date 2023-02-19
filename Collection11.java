import java.util.*;
class Collection11
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

        lobj.addLast(121);
        System.out.println("Element of Likedlist are :"+lobj);


        Iterator iobj = lobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        if(lobj.contains(121))
        {
            System.out.println("121 is Present in Linked List :");
        }
        else
        {
             System.out.println("121 is not Present in Linked List :");
        }
        lobj.remove();
         System.out.println("Element of Likedlist are :"+lobj);


         lobj.remove(0);
         System.out.println("Element of Likedlist are :"+lobj);


         lobj.removeLast();
         System.out.println("Element of Likedlist are :"+lobj);


         lobj.set(0,500);
          System.out.println("Element of Likedlist are :"+lobj);

          lobj.set(2,400);
          System.out.println("Element of Likedlist are :"+lobj);


          lobj.clear();
          System.out.println("Element of Likedlist are :"+lobj);




    }
}
