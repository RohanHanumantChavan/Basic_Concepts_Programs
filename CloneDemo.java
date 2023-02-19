class Employee
{
    public int Eid;
    public String Name;
    public int Salary;

    public Employee(int No, String str, int Value)
    {
        this.Eid = No;
        this.Name = str;
        this.Salary = Value;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}
class CloneDemo
{
    public static void main(String Arg[])
    {
        try
        {
          Employee eobj1 = new Employee(101,"Rahul",11,000);
          Employee eobj2 = new (Employee)eobj.clone();

          System.out.println("Name of first Employee : "+eobj1.Name);
          System.out.println("Name of first Employee : "+eobj1.Salary);

          System.out.println("Name of second Employee : "+eobj2.Name);
          System.out.println("Name of second Employee : "+eobj2.Salary);
          
        }
        eobj1.Name = "Sagar";
        System.out.println("Name of first Employee : "+eobj1.Name);
          System.out.println("Name of second Employee : "+eobj2.Salary);
          
          catch(CloneNotSupportedException obj)
          {}
        
    }
}



