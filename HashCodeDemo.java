class Demo
{
    public int iNo1;
    public int iNo2;

    public Demo(int A, int B)
    {
        this.iNo1 = A;
        this.iNo2 = B;
    }
}
    class HashCodeDemo
    {
        public static void main(String Arr[])
        {
            Demo obj1 = new Demo(11,21);
            Demo obj2 = new Demo(51,101);

            System.out.println("HashCode of the obj1 is :"+obj1.hashCode());
            System.out.println("HashCode of the obj2 is :"+obj2.hashCode());
        }
    }
