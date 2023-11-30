import java.util.*;
class MatRev
{   int arr[][],m,n;
    MatRev(int mm,int nn)
    {   m=mm;
        n=nn;
    }
    void fillarray()
    {   Scanner sc=new Scanner(System.in);
        arr=new int[m][n];
        System.out.println("Fill the array");
        for(int i=0;i<m;i++)
        {   for(int j=0;j<n;j++)
            {   arr[i][j]=sc.nextInt();
            }
        }
    }
    int reverse(int x)
    {   String s=String.valueOf(x);
        String rev="";
        for(int i=s.length()-1;i>=0;i--)
        {   rev=rev+s.charAt(i);
        }
        return Integer.valueOf(rev);
    }
    void revMat(MatRev P)
    {   for(int i=0;i<m;i++)
        {   for(int j=0;j<n;j++)
            {   this.arr[i][j]=reverse(P.arr[i][j]);
            }
        }
    }
    void show()
    {   for(int i=0;i<m;i++)
        {   for(int j=0;j<n;j++)
            {   System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter no.of Rows");
        int mm=sc.nextInt();
        System.out.println("Enter no.of Columns");
        int nn=sc.nextInt();
        MatRev obj=new MatRev(mm,nn);
        obj.fillarray();
        obj.revMat(obj);
        obj.show();
    }
}

    
                
        