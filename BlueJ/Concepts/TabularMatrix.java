class TabularMatrix
{   public static void main()
    {  int a[][]={{4,2,6,8,5},{14,15,13,19,12},
       {9,27,23,22,21},{11,16,23,34,1},{45,61,3,0,7}};
       //BAD or INCORRECT
       for(int i=0;i<a.length;i++)
       {   for( int j=0;j<a.length;j++)
           {   System.out.print(a[i][j]+" ");
           }
           System.out.println();
       }
       System.out.println(); //Gap
       //CORRECT TABULAR-tab : \t (backslash)
       for(int i=0;i<a.length;i++)
       {   for( int j=0;j<a.length;j++)
           {   System.out.print(a[i][j]+"\t");
               //TAB auto indents
           }
           System.out.println();
       }
    }
}