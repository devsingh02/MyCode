import java.util.*;
class Exchange
{   String sent,rev;int size;
    Exchange()
    {   sent="";
        rev="";
        size=0;
    }
    void readsentence()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter any sentence");
        sent=sc.nextLine();
    }
    void exfirstlast()
    {   StringTokenizer st=new StringTokenizer(sent," .");
        while(st.hasMoreTokens())
        {   String s=st.nextToken();
            int l=s.length();
            if(l!=1) //exception for single letter e.g. 'a'
                s=s.charAt(l-1)+s.substring(1,l-1)+s.charAt(0);
            rev=rev+s+" ";
        }
        rev=rev.trim()+".";
    }
    void display()
    {   System.out.println("Original Sentence: "+sent);
        System.out.println("New Sentence: "+rev);
    }
    public static void main()
    {   Exchange obj=new Exchange();
        obj.readsentence();
        obj.exfirstlast();
        obj.display();
    }
}
        
