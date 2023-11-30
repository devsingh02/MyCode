import java.util.*;
class CircularPrime
{   void Operate(String str)
    {   String s=str;
        int n=Integer.valueOf(s); int ct=0;
        for(int i=0;i<s.length();i++)
        {   System.out.println(s);
            if(prime(n)==true)      //can call another function without obj
                ct++;               //only by fun() 
            s=s.substring(1)+s.charAt(0);
            n=Integer.valueOf(s);
        }                        //s becomes original after for loop???
        if(ct==str.length())
            System.out.println(str+" is a Circular Prime");
        else
            System.out.println(str+" is NOT a Circular Prime");
    }
    boolean prime(int a)
    {   int c=0;
        for(int i=1;i<=a;i++)
        {   if(a%i==0)
                c++;
        }
        if(c==2)
            return true;
            else
                return false;
    }
    public static void main()
    {   Scanner sc=new Scanner(System.in);
        CircularPrime obj=new CircularPrime();
        System.out.println("Enter any number");
        String s=sc.nextLine();
        //Space after Input OPTIONAL
        System.out.println();
        obj.Operate(s);
    }
}

        
        
            
        
        
          
                
                
                
                
        