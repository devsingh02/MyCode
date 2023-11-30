 //copy this for output:
//All is well that ends well. If music be the food of soul, play on. All that glitters is not gold. Fair is foul, and foul is fair.
import java.util.*;
class P2
{   String A[][],a[];int maxl,minl;
    void input()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter any paragraph");
        String str=sc.nextLine();
        StringTokenizer st=new StringTokenizer(str,".;!?"); //seperated sentences
        a=new String[st.countTokens()];
        maxl=0; //longest sentence
        minl=1000;
        for(int i=0;i<a.length;i++) //a
        {   a[i]=st.nextToken().trim();//remove unnecessary space
            int ct=0;
            for(int j=0;j<a[i].length();j++)
            {   if(a[i].charAt(j)==' ')
                    ct++;
            }
            if(maxl<ct)
                maxl=ct+1;
            if(minl>ct)
                minl=ct+1;
        }
        A=new String[a.length][maxl];
        for(int i=0;i<a.length;i++) //A
        {   StringTokenizer st2=new StringTokenizer(a[i]," ,");
            int j=0;
            while(st2.hasMoreTokens())
            {   String s=st2.nextToken();
                A[i][j]=s.substring(0,1).toUpperCase()+s.substring(1);;
                j++;
            }
        }
    }
    void display()
    {   for(int i=0;i<a.length;i++)
        {   for(int j=0;j<minl;j++)
            {   if(i==0||i==a.length-1||j==0||j==minl-1)
                    System.out.print(A[i][j]+"\t");
                else
                     System.out.print("\t");
            }
            System.out.println();
        }
    }
    public static void main()
    {   P2 obj=new P2();
        obj.input();
        obj.display();
    }
}

                    