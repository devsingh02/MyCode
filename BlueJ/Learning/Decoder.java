import java.util.*;
class Decoder
{   public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Encoded text please.");
        String s=sc.nextLine();
        s=s.toUpperCase()+" ";
        String str="";
        for(int i=0;i<s.length()-1;i++)
        {   char ch=s.charAt(i);
            char nch=s.charAt(i+1);
            if((int)ch>=48&&(int)ch<=57) //number  
                continue;
            else if(ch=='Y')             //Y       
                str=str+'A';
            else if(ch=='Z')             //Z       
                str=str+'B';
            else if(ch=='K'&&nch=='K')   //Space   
            {   for(int j=i;;j++)
                {   if(s.charAt(j)!='K') ///i++ AFTER LOOP
                    {   i=j-1;
                        break;
                    }
                }
                str=str+" ";     
            }                        
            else        //Normal
                str=str+String.valueOf((char)((int)ch+2));
        }
        //capitalising first letters
        str=" "+str; String Ans="";
        for(int i=1;i<str.length();i++)         
        {   char pch=str.charAt(i-1);
            char ch=str.charAt(i);
            if(pch!=' ')
                Ans=Ans+Character.toLowerCase(ch);
            else
                Ans=Ans+ch;
        }
        System.out.println(Ans);
    }
}
                
            
                
                
                        
                    