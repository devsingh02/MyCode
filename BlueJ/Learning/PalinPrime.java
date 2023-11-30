import java.util.*;
class PalinPrime
{   int A[][];int a[];int R,C;
    PalinPrime(int r,int c)
    {   R=r;
        C=c;
        A=new int[R][C];
        a=new int[R*C];
    }
    boolean palin(int n)
    {   String s=String.valueOf(n);
        String str="";
        for(int i=s.length()-1;i>=0;i--)
        {   str=str+s.charAt(i);
        }
        if(str.compareTo(s)==0)
            return true;
            else
                return false;
    }
    boolean prime(int n)
    {   int ct=0;
        for(int i=1;i<=n;i++)
        {   if(n%i==0)
                ct++;
        }
        if(ct==2)
            return true;
            else
                return false;
    }
    void generate()
    {   int ct=0;int i=1;
        while(ct<a.length)
        {   if((palin(i)==true)&&(prime(i)==true))
            {   a[ct]=i;
                ct++;
            }
            i++;
        }
    }
    void display()   //input and display
    {   int ct=0;
        for(int j=0;j<C;j++)
        {   for(int i=0;i<R;i++)
            {   A[i][j]=a[ct];
                ct++;
            }
        }
        for(int i=0;i<R;i++)
        {   for(int j=0;j<C;j++)
            {   System.out.print(A[i][j]+"\t");
            }
             System.out.println();
        }
    }
    public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. of Rows");
        int r=sc.nextInt();
        System.out.println("Enter no. of Columns");
        int c=sc.nextInt();
        PalinPrime obj=new PalinPrime(r,c);
        obj.generate();
        obj.display();
    }
}
    
            
        
        