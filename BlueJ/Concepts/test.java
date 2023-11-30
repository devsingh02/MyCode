class test
{
    void OYE(int a)
    {   System.out.println("Hello");
    }
    void OYE(String a)
    {   System.out.println("Ma boi");
    }
    public static void main(String args[])
    {    
         test ob=new test();
         ob.OYE(2);
         ob.OYE("hello");
         String s="Lets gooo";
         if(s.charAt(4)==' ')
         System.out.println(s.substring(0,9));
         
        }
    }
