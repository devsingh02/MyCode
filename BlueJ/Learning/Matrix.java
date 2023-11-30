//Global varaibles cannot be used or initialised in main()
//only can be used by putting static
//e.g. static int A[][]
//now we can initialise global variables in main

//main() varaibles can be used in functions by 
//passing them as parameters
//e.g. obj.Sort(int M;int a[]);

//best is to input in main and initialise the input
//in constructor to be used in all other functions

import java.util.*;
class Matrix
{   int A[][];int a[];int M;  //a for sorting
    Matrix(int n)
    {   M=n;
        A=new int[M][M];
        a=new int[(M-2)*(M-2)];
    }
    void input()
    {   Scanner sc=new Scanner(System.in);  //Scanner required for input
        System.out.println("Enter the elements of the array");
        int ct=0;
        for(int i=0;i<M;i++)
        {   for(int j=0;j<M;j++)
            {   A[i][j]=sc.nextInt();
                if(i!=0&&i!=M-1&&j!=0&&j!=M-1)
                {   a[ct]=A[i][j];
                    ct++;
                }
            }
        }
    }
    void OrMatrix()
    {   System.out.println("ORIGINAL MATRIX");  
        for(int i=0;i<M;i++)
        {   for(int j=0;j<M;j++)
            {   System.out.print(A[i][j]+"\t");
            }
            System.out.println();
        }
    }
    void PrSort()           //INSERTION SORT
    {   for(int i=1;i<a.length;i++)
        {   int key=a[i];
            int j=i;
            while((j>0)&&(a[j-1]>key))
            {   a[j]=a[j-1];
                j--;
            }
            a[j]=key;
        }
        int ct=0;
        System.out.println("REARRANGED MATRIX");
        for(int i=0;i<M;i++)//Printing Sorted Matrix
        {   for(int j=0;j<M;j++)
            {   if(i!=0&&i!=M-1&&j!=0&&j!=M-1)
                {   A[i][j]=a[ct];
                    ct++;
                }
                System.out.print(A[i][j]+"\t");
            }
            System.out.println();
        }
    }
    void Diagonal()
    {   System.out.println("DIAGONAL ELEMENT");
        int s=0;
        for(int i=0;i<M;i++)
        {   for(int j=0;j<M;j++)
            {   if((i==j)||(i+j==M-1))
                {   System.out.print(A[i][j]+"\t");
                    s=s+A[i][j];
                }
                else
                     System.out.print("\t");    
            }
            System.out.println();
        }
        System.out.println("Sum="+s);
    }
    public static void main()
    {   Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of matrix");
        int M=sc.nextInt();
        Matrix obj=new Matrix(M);
        if(M<=3&&M>=10)
            System.out.println("Size out of range");
        else
        {   obj.input();
            obj.OrMatrix();
            obj.PrSort();
            obj.Diagonal();
        }
    }
}
       


   
    

        
        
        