import java.util.*;
class ReverseOrder
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter any sentence to reverse in order");
        String s=sc.nextLine();
        s=" "+s;
        String rev="";
        int start,end=s.length();
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s.charAt(i)==' ')
            {   start=i+1;
                rev=rev+s.substring(start,end)+" ";
                end=i;
            }
        }
        System.out.println(rev);
    }
}
