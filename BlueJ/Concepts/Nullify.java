class Nullify
{   public static void main()
    {   int n=10000;
        String str="Hello boys";
        char ch1='Y';
        char ch2='O';
        //NULLIFICATION
        System.out.println(n=0);         //nullification of int NOT POSSIBLE only 0 viable
        System.out.println(str="");      //nullification of String
        System.out.println(ch1=(char)0); //nullification of char METHOD 1
        System.out.println(ch2='\0');    //nullification of char METHOD 2
    }
}