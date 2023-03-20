public class BeverageTestDrive
{
    public static void main (String[] args)
    {
        Tea tea = new Tea();
        Coffe coffe = new Coffe();

        System.out.println("Making tea...");
        tea.prepareRecipe();

        System.out.println("Making tea...");
        coffe.prepareRecipe();
    }
}