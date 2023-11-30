class UpLowCase           // IGNORES SPECIAL CHARACTERS //
{   public static void main()
    {   //String
        String s="ChiLLi PaNeer is Gr8!!";
        System.out.println(s.toUpperCase());
        System.out.println(s.toLowerCase());
        //char
        char ch1='K';
        char ch2='!';
        System.out.println(Character.toUpperCase(ch1));
        System.out.println(Character.toLowerCase(ch1));
        System.out.println(Character.toUpperCase(ch2));
        System.out.println(Character.toLowerCase(ch2));
    }
}