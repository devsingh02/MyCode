final class Derived2 extends Base2
{   int z;
    Derived2(int x,int y,int z)
    {   super(x,y);
        this.z=z;
    }
    void input()
    {   super.input();
        z=3;
    }
    public void display()
    {   System.out.println(x+" "+y+" "+z);
    }
}