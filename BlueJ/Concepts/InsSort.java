class InsSort
{   int a[]={5,6,4,7,3,8,2,9,1,10};
    void Ascending()
    {   for(int i=1;i<a.length;i++)
        {   int key=a[i];
            int j=i;
            while((j>0)&&(a[j-1]>key))//'>' for ascending
            {   a[j]=a[j-1];
                j--;
            }
            a[j]=key;
        }
    }
    void Descending()
    {   for(int i=1;i<a.length;i++)
        {   int key=a[i];
            int j=i;
            while((j>0)&&(a[j-1]<key))//'<' for descending
            {   a[j]=a[j-1];
                j--;
            }
            a[j]=key;
        }
    }
    void display()
    {   for(int i=0;i<a.length;i++)
        {   System.out.print(a[i]+" ");
        }
        System.out.println();
    }
    public static void main()
    {   InsSort obj=new InsSort();
        obj.Ascending();
        obj.display();
        obj.Descending();
        obj.display();
    }
}
            