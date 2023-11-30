class Strings
{   String swapPairs(String s)
    {   int l=s.length();
        if(l%2!=0)
        {   s=s+" ";
            l=l+1;
        }
        String str="";
        for(int i=0;i<l;i=i+2)
        {  char ch1=s.charAt(i);
           char ch2=s.charAt(i+1);
           if(ch1==' ')
           ch1='\0';               //ch1=''; is wrong....these are
           if(ch2==' ')            //the two ways to make char null       
           ch2=(char)0;
           str=str+ch2+ch1;
        }
        return str;
    }
    public static void main()
    {   Strings obj=new Strings();
        System.out.println(obj.swapPairs("hello there"));
    }
}