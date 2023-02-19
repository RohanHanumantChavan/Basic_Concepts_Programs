class Demo implements Runnable
{
    public void run()
    {
        int i = 0;
        for(i = 1; i < 10; i++)
        {
            //System.out.println(i);
           System.out.println(Thread.currentThread().getName()+" : "+i);
        }
    }
}
class ThreadDemo7
{
    public static void main(String Arr[])
    {
        System.out.println("Inside main method");
        System.out.println("Name of Current Thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.setName("First");
        t2.setName("Second");

        t1.start();
        t2.start();
    }
}