import java.util.*;
class ArmNum
{   int n,l;
    ArmNum(int nn)
    {   n=nn;
        l=0; //since no mention in ques.
    }
    int sum_pow(int i)
    {   if(i==0)
            return 0;
        else
            return (int)Math.pow(i%10,l)+sum_pow(i/10);
    }//(int) is required else it would return a double value
    void isArmstrong()
    {   l=String.valueOf(n).length();
        if(sum_pow(n)==n)
            System.out.println("Armstrong No.");
            else
                System.out.println("Not an Armstrong No.");
    }
    public static void main()
    {   ArmNum obj=new ArmNum(54748);
        obj.isArmstrong();
    }
}
        
            