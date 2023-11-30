package com.trial;

public class t extends trial{
    void disp(){
        System.out.println("Child");
    }
    public static void main(String[] args) {
        trial obj=new t();
        obj.disp();
    }
}
