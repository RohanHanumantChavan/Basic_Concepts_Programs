import java.net.*;
import java.io.*;
class ServerDemo
{
    public static void main(String Arr[]) throws Exception
    {
        System.out.println("Server Application is Runnig....");
        ServerSocket ss = new ServerSocket(2100);
        System.out.println("Server is Runnig at port no 2100 and Waiting for the Client Request");
        Socket s = ss.accept();
        System.out.println("Request of Client get Accepted");
        

        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));

        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1, str2;

        while((str1 = br1.readLine())!=null)
        {
             System.out.println("Client says : "+str1);
            System.out.print("Enter message for client : ");
            str2 = br2.readLine();
            ps.println(str2);
        }


        
        
    }
}