public class Main
{
    public static void main (String[] argv)
    {
        PizzaStore nyStore = new NYPizzaStore();

        Pizza pizza = nyStore.orderPizza("cheese");
        System.out.println("Vi zakazali a " + pizza.getName() + "\n");
    }
}