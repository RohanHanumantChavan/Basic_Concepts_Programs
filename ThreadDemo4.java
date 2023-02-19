
class Demo  extends Thread
{
    public void run()
    {
        int i = 0;
        for(i = 1; i < 10; i++)
        {
            try
            {

            System.out.println(Thread.currentThread().getName()+" :"+i);
            Thread.sleep(500);
            }
            catch(InterruptedException obj)
            {}
        }

    }
}
class ThreadDemo4
{
    public static void main(String Arr[])
    {
        System.out.println("Inside Main Method");

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