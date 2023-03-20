class Client
{
    private AbsWater water;
    private AbsBottle bottle;

    public Client(AbsFactory factory)
    {
        water = factory.CreateWater();
        bottle = factory.CreateBottle();
    }

    public void Run()
    {
        bottle.Interact(water);
    }
}