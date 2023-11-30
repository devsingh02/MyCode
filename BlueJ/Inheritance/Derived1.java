public class Derived1 extends Base1
{   int d;
    void average()
    {   add();
        d=c/2;
    }
    public void display()
    {   super.display();
        System.out.println(d);
    }
}