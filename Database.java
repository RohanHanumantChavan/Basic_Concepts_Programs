import java.sql.*;

class Database
{
   
    public static void main(String arg[]) 
    {
        try
        {
        Class.forName("com.mysql.jdbc.Driver");
        String URL = "jdbc:mysql://localhost:3306/ppa41";
        String Username = "root";
        String Password = "rohan";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URL,Username,Password);

        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery(Query);

       
            
        

        while(robj.next())
        {
            System.out.println("RID : "+robj.getInt("RID"));
            System.out.println("Name : "+robj.getString("Name"));
            
            System.out.println("Marks : "+robj.getInt("Marks")); 
            System.out.println("City : "+robj.getString("City")); 

        }

       }
        catch(Exception obj)

        {
            System.out.println(obj);
        }

        catch (ClassNotFoundException obj1) {
            System.out.println(obj1);
        }  
                                         
        }

    }
