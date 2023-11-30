import java.util.*;
class RotateClock
{   int M,A[][],a[][];
    RotateClock(int m)
    {   M=m;
        A=new int[M][M];
        a=new int[M][M];
    }
    void input()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Fill the array");
        for(int i=0;i<M;i++)
        {   for(int j=0;j<M;j++)
            {   A[i][j]=sc.nextInt();
            }
        }
        System.out.println("ORIGINAL MATRIX");
        for(int i=0;i<M;i++)
        {   for(int j=0;j<M;j++)
            {   System.out.print(A[i][j]+"\t");
            }
            System.out.println();
        }
    }
    void rotate()
    {   for(int i=0;i<M;i++)
        {   int k=M-1;
            for(int j=0;j<M;j++)
            {   a[i][j]=A[k][i];
                System.out.print(a[i][j]+"\t");
                k--;
            }
            System.out.println();
        }
    }
    void sum_corn()
    {   int sum=a[0][0]+a[0][M-1]+a[M-1][0]+a[M-1][M-1];
        System.out.println("Sum of the corner elements="+sum);
    }
    void display()
    {   input();
        System.out.println("ROTATED MATRIX");
        rotate();
        sum_corn();
    }
    public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter the order of matrix");
        int m=sc.nextInt();
        if(m>2&&m<10)
        {   RotateClock obj=new RotateClock(m);
            obj.display();
        }
        else
        {   System.out.println("SIZE OUT OF RANGE"); 
        }
    }
}