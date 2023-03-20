class ColaFactory extends AbsFactory
{
    public AbsWater CreateWater()
    {
        return new ColaWater();
    }

    public AbsBottle CreateBottle()
    {
        return new ColaBottle();
        
    }
}