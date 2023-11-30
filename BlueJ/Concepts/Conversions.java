class Conversions
{   public static void main()
    {   //int to String
        int n1=0123;   //Method 1
        System.out.println(Integer.toString(n1));
        
        int n2=4560070;     //Method 2
        System.out.println(String.valueOf(n2));
       
        
        //String to int
        String s="001000";                           //String cannot be "  100 002  " or
        System.out.println(Integer.valueOf(s));      //"100a00v", that means 
                                                     //NO SPACE or NO CHAR, will give exception. 
        //char to int : TYPECASTING
        
        //int to char : TYPECASTING
    }
}








