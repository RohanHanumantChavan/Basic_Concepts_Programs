import java.io.*;
class Bufferedinput
{
    public static void main(String arr[])
    {
        InputStreamReader iobj = new InputStreamReader(System.in)
        BufferedReader bobj = new BufferedReader(iboj);
        String Name = null;
        int Age = 0;
        float Marks = 0.0f;
        int RollNumber = 0;

        System.out.println("Enter Your Name");
        Name = iboj.readLine();

        System.out.printf("Enter Your Age");
        Age Integer.parseInt(iobj.readLine());

        System.out.println("Enter Your Marks");
        Marks Float.parseFloat(iobj.readLine());

        System.out.println("Enter Your RollNumber");
        RollNumber = Integer.parseInt(iobj.readLine());


        System.out.println("Name : "+Name);
        System.out.println("Age : "+Age);
        System.outprintln("Marks : "+Marks);
        System.out.println("RollNumber : "+RollNumber);
    }
}