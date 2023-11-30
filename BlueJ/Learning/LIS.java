class LIS
{   public static void main()
    {   int a[]={10,22,9,33,21,50,51,55,60,65,70,41,80,90};
        int max=1,b=0,e=0,i=0,j=0;
        for(i=0;i<a.length-1;i++)
        {   int c=1;
            for(j=i;j<a.length-1;j++)
            {   if(a[j]<a[j+1])
                    c++;
                else    //j comes to 70 and then breaks
                    break;  
            }
            if(c>max)
            {   max=c;
                b=i;e=j;
            }
        }
        System.out.println("Length of Longest Subsequence="+max);
        for(i=b;i<=e;i++)
        {   System.out.print(a[i]+" ");
        }
    }
}
                
            
            