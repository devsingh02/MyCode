package com.static_eg;

class Human {
    String name;
    int age;
    boolean married;
    static int population; //default value=0 (default values of all objects = null)

    Human(String name,int age,boolean married){
        this.name=name;
        this.age=age;
        this.married=married;
        Human.population+=1;  //<class>.name for static variables
    }
}
