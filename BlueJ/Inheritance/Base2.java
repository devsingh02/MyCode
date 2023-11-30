abstract class Base2
{   int x,y;
    final double p=3.14;
    Base2(int x,int y)
    {   this.x=x;
        this.y=y;
    }
    void input()
    {   x=1;
        y=2;
    }
    final void message()
    {   System.out.println("Thanks");
    }
    abstract public void display();
}
