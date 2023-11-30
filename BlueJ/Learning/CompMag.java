import java.util.*;
class CompMag
{   int m,n;
    CompMag(int mm,int nn)
    {   m=mm;
        n=nn;
    }
    boolean comp(int a)
    {   int ct=0;
        for(int i=1;i<=a;i++)
        {   if(a%i==0)
                ct++;
        }
        if(ct>2)
            return true;
            else
                return false;
    }
    boolean magic(int a)
    {   while(a>9)
        {  int s=0;
           String str=String.valueOf(a);
           for(int i=0;i<str.length();i++)
           {    s=s+((int)str.charAt(i)-48);
           }
           a=s;
        }
        if(a==1)
            return true;
            else
                return false;
    }
    void display()
    {   int ct=0; int changeline=1; //changeline not required at all just for FUN
        System.out.println("THE COMPOSITE MAGIC INTEGERS ARE:");
        for(int i=m;i<=n;i++)
        {   if(magic(i)==true&&comp(i)==true)
            {   System.out.print(i+"\t");
                ct++;
                changeline++;
            }
            if(changeline%15==0)
            {   System.out.println();
                changeline++;
            }
        }
        if(ct==0)
             System.out.print("NILL");   
        System.out.println("\n"+"FREQUENCY OF COMPOSITE MAGIC INTEGERS IS:"+ct);
    }
    public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.print("Enter Range:"+"\n"+"m=");
        int mm=sc.nextInt(); //also changes line since input
        System.out.print("n=");
        int nn=sc.nextInt();
        if(mm>nn)
            System.out.println("INVAID INPUT");
        CompMag obj=new CompMag(mm,nn);
        obj.display();
    }
}
        
        
        
        
        
                
           
    
    