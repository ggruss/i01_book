public class ChicagoStyleCheesePizza extends Pizza
{
    public ChicagoStyleCheesePizza()
    {
        name="Chicago Style Deep Dish Cheese Pizza";
        dought = "Extra Thick Crust Dough";
        sause = "Plum Tomato Sauce";

        toppings.add("Shredded Mozzarella Cheese");
    }
    void cut()
    {
        System.out.println("Cutting the pizza into sqare slices")
    }
}