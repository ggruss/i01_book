class Main
{
    static void Main(string[] args){
        Subject subject = new RealSubject();

        System.out.println("Owner work:");
        TryAccess(new Proxy(subject, "Owner"),"John");

        System.out.println("Administrator work:");
        TryAccess(new Proxy(subject, "Administrator"),"Mark");

        System.out.println("Manager work:");
        TryAccess(new Proxy(subject, "Manager"),"");

        System.out.println("Owner work:");
        TryAccess(new Proxy(subject, "Owner"),"John");
    }
}