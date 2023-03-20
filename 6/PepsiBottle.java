class PepsiBottle extends AbsBottle
{
    public void Interact(AbsWater water)
    {
        System.out.println(this + "interacts with" + water);
    }
}