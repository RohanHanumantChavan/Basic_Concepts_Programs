import java.net.*;
import java.io.*;

public class Client
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Client Application is Ruunin..");
        Socket s = new Socket("Localhost",2100);

        System.out.println("client is waiting for the server to accept the request ");
        
        printStream ps = new printStream(s.getOutputStream());
    }