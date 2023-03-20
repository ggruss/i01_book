public class Program
{
    public static void main(String[] argv)
    {
        Client client = new Client(new ColaFactory());







        client = new Client(new PepsiFactory());
        client.Run();
    }
}