class PepsiFactory extends AbsFactory
{
    public AbsWater CreateWater()
    {
        return new PepsiWater();
    }

    public AbsBottle CreateBottle()
    {
        return new PepsiBottle();
    }
}