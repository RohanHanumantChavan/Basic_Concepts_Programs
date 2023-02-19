import java.util.*;
class AgeInvalidException extends Exception
{
    AgeInvalidException(String str)
    {
        super(str);
    }

}
class UserDefine
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the your Age:");
        int Age = sobj.nextInt();
        


        try
        {
            if(Age < 15)
            {
                throw new AgeInvalidException("Your age is less than 15");

            }

            else
            {
                System.out.println("Age is valid");
            }
        }
            catch(AgeInvalidException obj)
            {
                System.out.println(obj);
            }
        }

    }
