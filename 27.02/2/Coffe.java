public class Coffe extends CaffeineBeverage
    {
        public void prepareRecipe()
        {
            boilWater();
            brewCoffeeGrinds();
            pourInCup();
            addSugarAndMilk();
        }

        private void addCondimets()
        {
            System.out.println("Adding Sugar and Milk");
        }

        

        private void brew()
        {
            System.out.println("Dripping coffee through filter");
        }

        
    }

