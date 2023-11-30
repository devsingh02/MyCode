package com.trial;

import java.util.*;
class Phonename
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of names");
        int n = sc.nextInt();
        String a[]= new String [n];
        int p[]= new int [n];
        System.out.println("Enter names");
        for(int i=0; i<n; i++)
        { a[i]= sc.nextLine();
        }
        System.out.println("Enter phone numbers");
        for(int i=0; i<n; i++)
        { p[i]= sc.nextInt();
        }
        System.out.println("Enter name to be searched");
        String name= sc.nextLine();
        for(int i=0; i<n; i++)
        {
            if(a[i].equals(name))
                System.out.println(p[i]);
        }
    }
}
