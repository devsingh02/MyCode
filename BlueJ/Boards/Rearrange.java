import java.util.*;
class Rearrange
{   String wrd,newwrd;
    Rearrange()
    {   wrd="";
        newwrd="";
    }
    void readword()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter any word");
        wrd=sc.nextLine();
        wrd=wrd.toUpperCase();
    }
    void freq_vow_con()
    {   int cons=0;int vow=0;         //why "int const" gives error?
        for(int i=0;i<wrd.length();i++)
        {   char ch=wrd.charAt(i);
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                cons++;
            else
                vow++;
        }
        System.out.println("Frequency:"+"\n"+"Vowels="+vow+"\n"+"Constants="+cons);
    }
    void arrange()
    {   String cons="";
        for(int i=0;i<wrd.length();i++)
        {   char ch=wrd.charAt(i);
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                newwrd=newwrd+ch;
            else
                cons=cons+ch;
        }
        newwrd=newwrd+cons;
    }
    void display()
    {      System.out.println(wrd);
           System.out.println(newwrd);
    }
    public static void main()
    {   Rearrange obj=new Rearrange();
        obj.readword();
        obj.arrange(); 
        obj.display();
        obj.freq_vow_con();
    }
}

 
         
        
        
        
            
            