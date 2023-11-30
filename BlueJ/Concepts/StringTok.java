import java.util.*; //necessary for StringTokenizer
class StringTok
{   public static void main()
    {   String s="hello there! all the best bro; god is always there. Samarpan kara?";
        StringTokenizer st=new StringTokenizer(s,"!;.?"); //extracted sentences out of paragraph
        String A[]=new String[st.countTokens()];
        for(int i=0;i<A.length;i++)
        {   A[i]=st.nextToken();
        }
        for(int i=0;i<A.length;i++)
        {   System.out.println(A[i]);
        }
    }
}
        
        