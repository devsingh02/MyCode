package com.Singleton;

//Singleton class: has/returns only 1 object. ∴ must not allow anyone to call the
//constructor of the class ∵ constructor is called when new objects are being created

public class Singleton {
    String password;
    private Singleton(String password){ //disabled everyone to call the constructor
        this.password=password;
    }
    private static Singleton obj=new Singleton("1234"); //object declared

//    public String getObject(){return obj.password;} won't work since Main can't create
//    Singleton's object

    public static Singleton getObject(){return obj;}
    //static ∵ would be called in psvm
}
