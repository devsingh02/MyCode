package com.Singleton;

public class Main {
    public static void main(String[] args) {
        Singleton obj=Singleton.getObject();
        System.out.println(obj.password);
    }
}
